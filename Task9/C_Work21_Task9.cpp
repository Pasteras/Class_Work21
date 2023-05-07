//Given an array of integers. Using pointers,
//swap the elements of the array with even numbers
//by odd indices(that is, those elements of the array which
//stand in even places, swap with elements that
//stand in odd places).

#include <iostream>

using namespace std;

void Mas(int parr[], int parr1[], int parr2[], int size);

int main()
{
    const int size = 8;
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int arr1[size / 2];
    int arr2[size / 2];

    int* parr = arr;
    int* parr1 = arr1;
    int* parr2 = arr2;

    Mas(parr, parr1, parr2, size);

}

void Mas(int parr[], int parr1[], int parr2[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << parr[i] << " ";
    }
    cout << endl;

    for (int i = 0, j = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            parr1[j] = parr[i];
            j++;
        }
    }

    for (int i = 0, j = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            parr2[j] = parr[i];
            j++;
        }
    }

    for (int i = 0, j = 0, k = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            parr[i] = parr2[j];
            j++;
        }

        if (i % 2 != 0)
        {
            parr[i] = parr1[k];
            k++;
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << parr[i] << " ";
    }

}

