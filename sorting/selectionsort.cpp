#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
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
    int arr[10] = {45, 56, 12, 23, 89, 34, 2, 6, 1, 7};
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    selectionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}