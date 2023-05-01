//Write a function that takes a pointer to an integer
//number and returns its square.

#include <iostream>

using namespace std;

void sqr(int *p_num);

int main()
{
    int num = 3;
    int* p_num = &num;
    sqr(p_num);
}

void sqr(int *p_num)
{
    (*p_num) *= *p_num;
    cout << "Square: " << *p_num << endl;
}
