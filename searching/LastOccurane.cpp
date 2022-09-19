#include <iostream>
using namespace std;

int lastOcc(int arr[], int start, int end, int index)
{
    int n = end;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (index < arr[mid])
            end = mid - 1;
        else if (index > arr[mid])
            start = mid + 1;
        else
        {
            if (mid == n || arr[mid + 1] != arr[mid])
                return mid;
            else
                start = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 3, 5, 6, 8, 8, 9, 9, 10, 12};
    int index = lastOcc(arr, 0, sizeof(arr), 9);
    cout<<index;
}