//Write a function that takes two pointers to
//integers and exchanges their values.

#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 6;

    cout << "a = " << a << endl << "b = " << b << endl;

    int *pa = &a;
    int *pb = &b;

    int temp = *pb;
    *pb = *pa;
    *pa = temp;

    cout << endl << "a = " << *pa << endl << "b = " << *pb << endl;
}
