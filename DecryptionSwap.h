#pragma once
#include "ABCModel.h"

class DecryptionSwap :
    public ABCModel
{

public:
    DecryptionSwap(const char ABC[]);

    string Hacking(string& text); // �����
    void swap(int* a, int i, int j);
    bool NextSet(int* a, int n); // ����� ��������� ������������
    int CalculateBigram(string text, int *a);
};

