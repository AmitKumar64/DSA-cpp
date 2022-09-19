#include <iostream>
#include <array>
using namespace std;

int firstOcc(int arr[], int start, int end, int value)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (value < arr[mid])
            end = mid - 1;
        else if (value > arr[mid])
            start = mid + 1;
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 3, 5, 6, 8,8, 9, 9, 10, 12};
    int index = firstOcc(arr, 0,sizeof(arr), 9);
    cout << index;
}