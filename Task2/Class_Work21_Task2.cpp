//Write a function that takes a pointer to an integer
//number and increases its value by 1.

#include <iostream>

using namespace std;

void Plus(int* p_num);

int main()
{
    int num = 0;
    cout << "Num: " << num << endl;
    int *p_num = &num;
    Plus(p_num);
    cout << "Num: " << num << endl;
}

void Plus(int *p_num)
{
    (*p_num)++;
}
