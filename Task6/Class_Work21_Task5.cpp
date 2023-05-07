//Write a function that accepts a pointer to two
//integers and returns their product.

#include <iostream>

using namespace std;

int Sum(int *pnum1, int *pnum2);

int main()
{
    int num1 = 3;
    int num2 = 5;

    int *pnum1 = &num1;
    int *pnum2 = &num2;

    cout << "Sum: " << Sum(pnum1, pnum2) << endl;
}
int Sum(int *pnum1, int *pnum2)
{
    return (*pnum1) + (*pnum2);
}
