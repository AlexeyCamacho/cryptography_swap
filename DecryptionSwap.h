#pragma once
#include "ABCModel.h"

class DecryptionSwap :
    public ABCModel
{

public:
    DecryptionSwap(const char ABC[]);

    void Hacking(string& text); // �����
    void swap(int* a, int i, int j);
    bool NextSet(int* a, int n); // ����� ��������� ������������
    int CalcalculateBigram(string text, int *a);
};

