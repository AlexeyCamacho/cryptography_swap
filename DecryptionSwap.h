#pragma once
#include "ABCModel.h"

class DecryptionSwap :
    public ABCModel
{

public:
    DecryptionSwap(const char ABC[]);

    void Hacking(string& text); // Взлом
    void swap(int* a, int i, int j);
    bool NextSet(int* a, int n); // Поиск следующей перестановки
    int CalcalculateBigram(string text, int *a);
};

