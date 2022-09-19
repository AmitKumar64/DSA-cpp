#include <iostream>
using namespace std;

int lastOcc(int arr[], int start, int end, int index)
{
    int n = end;
    int mid = (start + end) / 2;
    if (index < arr[mid])
        return lastOcc(arr, start, mid - 1, index);
    else if (index > arr[mid])
        return lastOcc(arr, mid + 1, end, index);
    else
    {
        if (mid == n || arr[mid + 1] != arr[mid])
            return mid;
        else
            return lastOcc(arr, mid + 1, end, index);
    }
    return -1;
}

int main()
{

    int arr[] = {1, 3, 5, 6, 8, 8, 9, 9, 10, 12};
    int index = lastOcc(arr, 0, sizeof(arr), 9);
    cout << index;
}