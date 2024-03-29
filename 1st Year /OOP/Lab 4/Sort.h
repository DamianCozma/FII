#include <initializer_list>

#pragma once
class Sort
{
    int size;
    int* v;
    void QuickSort(int st, int dr, bool ascendent);
    int partitionare(int st, int dr, bool ascendent);

public:
    Sort(int n, int min, int max);
    Sort(std::initializer_list<int> list);
    Sort(int n, int* v);
    Sort(int n, ...);
    Sort(char* s);
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};

//Damian Cozma - March 2024
