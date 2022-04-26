#include "DecryptionSwap.h"

DecryptionSwap::DecryptionSwap(const char ABC[]) : ABCModel(ABC)
{
	
}

void DecryptionSwap::Hacking(string& text)
{
	int swap;
	int maxChance = 0;
	vector<string> words;
	for (int i = 2; i <= 10; i++) { // Перебор по длине ключа
		string s = "";
		words.clear();
		int chance = 0;

		int j = i;
		while (j < text.length()) {
			s.assign(text, (j - i), j);
			words.push_back(s);
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
				chance += CalcalculateBigram(*itr, a);
			}

			if (chance > maxChance) {
				maxChance = chance;
				swap = *a;
			}

		} while (NextSet(a, n));
	}
}

int CalcalculateBigram(string text, int* a) {

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