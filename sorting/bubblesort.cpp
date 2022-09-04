#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    int flag;
    for (int i = 0; i < size; i++)
    {
        flag = 0;
        for (int j = 1; j < size - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int arr[10] = {67, 34, 23, 5, 24, 75, 12, 2, 1, 56};
    int size = 10;
    bubbleSort(arr, size);
}