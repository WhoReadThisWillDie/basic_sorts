#include "itc_basic_sorts.h"

void itc_bubble_sort(vector <int>& mass)
{
    for (int j = 0; j < mass.size(); j++) {
        for (int i = 0; i < mass.size() - j - 1; i++) {
            if (mass[i] > mass[i + 1]) {
                itc_swap(mass, i, i + 1);
            }
            print_vector(mass);
        }
    }
}

void itc_comb_sort(vector <int>& mass) //ne robit
{
    for (int step = mass.size() - 1; step >= 1; step /= 1.2) {
        for (int i = step; i < mass.size(); i++) {
            if (mass[i] < mass[i - step]) {
                swap(mass[i - step], mass[i]);
                print_vector(mass);
            }
        }
    }
}

void itc_add_sort(vector <int> mass)
{
    int temp;
    int index;
    for (int i = 0; i < mass.size(); i++) {
        temp = mass[i];
        index = i;
        while (index > 0 && temp < mass[index - 1]) {
            mass[index] = mass[index - 1];
            mass[index - 1] = temp;
            index--;
        }
        print_vector(mass);
    }
}

void itc_selection_sort(vector <int> mass)
{
    int count = 0;
    int min = 999999;
    int index = 0;
    for (int i = 0; i < mass.size(); i++) {
        for (int k = count; k < mass.size(); k++) {
            if (mass[k] < min) {
                min = mass[k];
                index = k;
            }
        }
        swap(mass[count], mass[index]);
        count++;
        min = 999999;
        print_vector(mass);
    }
}