#include <iostream>
using namespace std;

void insertionSort(int A[], int n)
{
    int i, j, x;

    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main()
{
    int arr[10] = {12, 23, 34, 54, 3, 1, 34, 56, 78, 2};
    int size = 10;
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}