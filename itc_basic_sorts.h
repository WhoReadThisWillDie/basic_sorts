#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//additional
void print_vector(const vector <int>& vector1);
bool issorted(vector <int>& mass);
void swap(int& a, int& b);
void itc_swap(vector <int>& mass, int a, int b);

//sorts
void itc_bubble_sort(vector <int>& mass);
void itc_comb_sort(vector <int>& mass);
void itc_add_sort(vector <int> mass);
void itc_selection_sort(vector <int> mass);