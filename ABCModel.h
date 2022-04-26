#pragma once
#include <string>
#include <vector>
#include <map>
#include <set>
#include <cmath>

using namespace std;


class ABCModel
{
private:
	set<string> wordsFromOneLetter;
	set<string> wordsFromTwoLetter;
	set<string> wordsFromThreeLetter;
	double indexOfMatches; // ������ ����������
	map<char, double> distribution; // ������������ �������� | ��������� ������� �������. ����� ������������ ������

protected:
	vector<char> ABC;
	vector<vector<int>> bigrams; // ��������

public:
	ABCModel(const char ABC[]); // �����������
	ABCModel(vector<char> ABC); // �����������
	~ABCModel() { };

	// Getters

	vector<char> GetABC();
	char GetCharABC(unsigned int i);
	vector<vector<int>> GetBigrams();
	map<char, double> GetDistribution();
	set<string> GetwordsFromOneLetters();
	set<string> GetwordsFromTwoLetters();
	set<string> GetwordsFromThreeLetters();
	double GetIndexOfMathes();

	// ������

	void CalculateDistribution(string& text);
	void CalculateBigrams(string& text);
	void Analyse(string text);
	void CollectLettersWords(string text);
	void AddLettersWord(string word);
	void CalculateIndexOfMatches();
	int CalculateShift(map<char, double> modifiedDistribution);
	int CheckShift(map<char, double> modifiedDistribution, unsigned int shift);

	void Reset();
};

