#include <iostream>
using namespace std;

int firstOcc(int arr[], int start, int end, int value)
{
    int mid = (start + end) / 2;
    if (value > arr[mid])
        return firstOcc(arr, mid + 1, end, value);
    else if (value < arr[mid])
        return firstOcc(arr, start, mid - 1, value);
    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;
        else
            return firstOcc(arr, start, mid - 1, value);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 7, 8};
    int index = firstOcc(arr, 0, sizeof(arr), 5);
    cout << index;
}