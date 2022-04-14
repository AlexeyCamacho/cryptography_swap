#include "Swap.h"

Swap::Swap(const char ABC[]) {
	this->ABC.assign(ABC, ABC + 33);
}

string Swap::encrypt(string text, string key) {
	string result;
	string word;

	text = validate(text);

	for (int i = 0; i < text.length() / key.length(); i++) {
		word.clear();
		for (int j = 0; j < key.length(); j++) {
			string s{ key[j] };
			word += text[stoi(s) + key.length() * i - 1];
		}
		result += word;
	}

	return result;
};

string Swap::decrypt(string text, string key) {
	string result;
	string word;

	for (int i = 0; i < text.length() / key.length(); i++) {
		word.clear();
		for (int j = 0; j < key.length(); j++) {
			//string x { j + 1 };
			int s = key.find(to_string(j+1));
			
			word += text[s + key.length() * i];
		}
		result += word;
	}

	return result;
};

string Swap::validate(string& text) {
	string result;

	for (unsigned int i = 0; i < text.length(); i++) {

		vector<char>::iterator itr = find(ABC.begin(), ABC.end(), text[i]);

		if (itr != ABC.end()) {
			result += text[i];
		}
		else {
			result += " ";
		}
	}

	for (unsigned int i = 0; i < result.length() - 1; i++) {

		if (result[i] == ABC[32] && result[i + 1] == ABC[32]) {
			result.erase(i + 1, 1);
			i--;
		}

	}
	return result;
}