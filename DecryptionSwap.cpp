#include "DecryptionSwap.h"

DecryptionSwap::DecryptionSwap(const char ABC[]) : ABCModel(ABC)
{
	
}

string DecryptionSwap::Hacking(string& text)
{
	string result;
	int maxChance = 0;
	vector<string> words;
	for (int i = 2; i < 10; i++) { // Перебор по длине ключа
		string s = "";
		words.clear();
		int chance = 0;

		if (text.length() < i || text.length() % i != 0) { continue; }


		int j = 0;
		while (j < text.length() && words.size() < 50) {
			s.assign(text, j, i);
			if (s.length() == i) {
				words.push_back(s);
			}
			s.clear();
			j += i;
		}

		
		int n, * a;
		n = i;
		a = new int[n];
		for (int j = 0; j < n; j++) // Перестановка
			a[j] = j + 1;

		do { // Делаем для всех вариантов перестановок

			vector<string>::iterator itr;
			for (itr = words.begin(); itr != words.end(); itr++) { // Перебираем все слова такой длинны из шифр текста
				int newChance = CalculateBigram(*itr, a);

				if (newChance == 0) { // Если запрещенная биграмма, то берем следующую
					chance = 0;
					break;
				}

				chance += newChance;
			}

			if (chance > maxChance) { // Если вероятность этих биграмм больше, то считаем её как за истинную.
				maxChance = chance;
				result.clear();
				for (int i = 0; i < n; i++) {
					result += std::to_string(a[i]);
				}
			}

			chance = 0;

		} while (NextSet(a, n));
	}

	string encriptString;
	encriptString.assign(text, 0, result.length());

	string origin;
	for (int i = 0; i < result.length(); i++) {
		string s{ result[i] };
		origin += encriptString[stoi(s) - 1];
	}

	string origRes;

	for (int i = 0; i < result.length(); i++) {
		int s = origin.find(encriptString[i]);
		origRes += to_string(s + 1);
	}

	return origRes;
}

int DecryptionSwap::CalculateBigram(string text, int* a) {
	int result = 0, chance;
	vector<char>::iterator itrI;
	vector<char>::iterator itrJ;
	for (unsigned int i = 0; i < text.length() - 1; i++) {

		char x = text[*a - 1];
		a++;
		char y = text[*a - 1];

		itrI = find(ABC.begin(), ABC.end(),x);
		itrJ = find(ABC.begin(), ABC.end(), y);
		int z1 = distance(ABC.begin(), itrI);
		int z2 = distance(ABC.begin(), itrJ);
		chance = bigrams[distance(ABC.begin(), itrI)][distance(ABC.begin(), itrJ)];

		if (chance == 0) {
			return 0;
		}

		result += chance;
	}

	return result;
}

void DecryptionSwap::swap(int* a, int i, int j)
{
	int s = a[i];
	a[i] = a[j];
	a[j] = s;
}

bool DecryptionSwap::NextSet(int* a, int n)
{
	int j = n - 2;
	while (j != -1 && a[j] >= a[j + 1]) j--;
	if (j == -1)
		return false; // больше перестановок нет
	int k = n - 1;
	while (a[j] >= a[k]) k--;
	swap(a, j, k);
	int l = j + 1, r = n - 1; // сортируем оставшуюся часть последовательности
	while (l < r)
		swap(a, l++, r--);
	return true;
}