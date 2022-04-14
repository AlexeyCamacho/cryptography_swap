#pragma once
#include <string>
#include <vector>

using namespace std;

class Swap
{
private:
	vector<char> ABC;

public:
	Swap(const char ABC[]);
	~Swap() { };

	string encrypt(string text, string key);
	string decrypt(string text, string key);
	string validate(string& text);

};