#include "itc_basic_sorts.h"

void print_vector(const vector <int>& vector1)
{
    if (vector1.size() > 0) {
        for (int i = 0; i < vector1.size() - 1; i++) {
            cout << vector1[i] << " ";
        }
        cout << vector1[vector1.size() - 1] << endl;
    }
}

bool issorted(vector <int>& mass)
{
    for (int i = 1; i < mass.size(); i++) {
        if (mass[i - 1] > mass[i])
            return false;
    }
    return true;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void itc_swap(vector <int>& mass, int a, int b)
{
    int temp = mass[a];
    mass[a] = mass[b];
    mass[b] = temp;
}