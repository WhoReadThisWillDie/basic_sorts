#include "itc_basic_sorts.h"

int main()
{
    int len, num;
    cin >> len;
    vector <int> mass;
    for (int i = 0; i < len; i++) {
        cin >> num;
        mass.push_back(num);
    }
    itc_selection_sort(mass);
    return 0;
}
