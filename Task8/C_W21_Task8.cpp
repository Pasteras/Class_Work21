//Write a function that takes a pointer to an integer
//a numberand returns its inverse.

#include <iostream>

using namespace std;

void revers(int *pnum);

int main()
{
	int num = 25;
	int* pnum = &num;
	revers(pnum);
}

void revers(int *pnum)
{
	int num1 = *pnum / 10 % 10;
	int num2 = *pnum % 10;
	int num3 = num2 * 10 + num1;

	cout << "Standart num: " << *pnum << endl
		<< "Reverse num: " << num3 << endl;
}




