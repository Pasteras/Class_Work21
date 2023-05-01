//Write a function that takes a pointer to an integer
//number and checks if it is even.

#include <iostream>

using namespace std;

void Check(int *p_num);

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int *p_num = &num;
    Check(p_num);
}

void Check(int *p_num)
{
    if (*p_num % 2 == 0)
    {
        cout << endl << "Num is even.";
    }
    else
    {
        cout << endl << "Num is not even.";
    }
}
