//Given two arrays, sorted by growth: A[n]
//and B[m].Form a stackable array C[n + m].
//from elements of arrays A and B, ordered by
//growth Use pointer syntax

#include <iostream>

using namespace std;

void Mas1(int parr[], int size);
void Mas2(int parr1[], int size);
void Mas3(int parr[], int parr1[], int parr2[], int size);

int main()
{
    const int size = 5;
    int arr[size] = { 12, 33, 6, 9, 5};
    int arr1[size] = { 66, 1, 54, 32, 4 };
    int arr2[size * 2];

    int* parr = arr;
    int* parr1 = arr1;
    int* parr2 = arr2;
    Mas1(parr, size);
    Mas2(parr1, size);
    Mas3(parr, parr1, parr2, size);
}

void Mas1(int parr[], int size)
{
    cout << "First massiv: ";

    for (int i = 0; i < size; i++)
    {
        cout << parr[i] << " ";
    }
    cout << endl;
    int temp;
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (parr[j] > parr[j + 1])
            {
                temp = parr[j];
                parr[j] = parr[j + 1];
                parr[j + 1] = temp;
            }

        }
    }

    cout << "Second sort massiv: ";
    for (int i = 0; i < size; i++)
    {
        cout << parr[i] << " ";
    }
    cout << endl;

}

void Mas2(int parr1[], int size)
{
    cout << endl << "Second massiv: ";

    for (int i = 0; i < size; i++)
    {
        cout << parr1[i] << " ";
    }
    cout << endl;
    int temp;
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (parr1[j] > parr1[j + 1])
            {
                temp = parr1[j];
                parr1[j] = parr1[j + 1];
                parr1[j + 1] = temp;
            }

        }
    }

    cout << "Second sort massiv: ";
    for (int i = 0; i < size; i++)
    {
        cout << parr1[i] << " ";
    }
    cout << endl;

}

void Mas3(int parr[], int parr1[], int parr2[], int size)
{
    cout << endl << "Third massiv: ";

    for (int i = 0, j = 0; i < size * 2; i++)
    {
        parr2[i] = parr[i];
        if (i >= 5)
        {
            parr2[i] = parr1[j];
                j++;
        }
    }

    for (int i = 0; i < size * 2; i++)
    {
        cout << parr2[i] << " ";
    }
    cout << endl;
    int temp;
    for (int i = 1; i < size * 2; i++)
    {
        for (int j = 0; j < (size * 2) - 1; j++)
        {
            if (parr2[j] > parr2[j + 1])
            {
                temp = parr2[j];
                parr2[j] = parr2[j + 1];
                parr2[j + 1] = temp;
            }

        }
    }

    cout << "Third sort massiv: ";
    for (int i = 0; i < size * 2; i++)
    {
        cout << parr2[i] << " ";
    }
    cout << endl;

}