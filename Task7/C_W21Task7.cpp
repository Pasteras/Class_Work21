//Write a function that takes a pointer to an integer
//numberand checks if it is a Fibonacci number.
#include <iostream>

using namespace std;

void fib(int p_num);

int main()
{
	double num;
	cout << "Enter num: ";
	cin >> num;
	double *p_num = &num;
	fib(*p_num);
}

void fib(int p_num)
{
	int i, y, z, b;
	bool q;
	y = z = b = 1;
	q = 0;
	
	for (i = 1; i < p_num; i++)
	{
		z = y;
		y = b;
		b = z + y;
		if (b == p_num) { q = 1; }
	}

	if (q)
	{
		cout << endl << p_num << " Num is Fibonachi." << endl;
	}

	else
	{
		{
			cout << endl << p_num << " Num is not Fibonachi." << endl;
		}
	}
}
