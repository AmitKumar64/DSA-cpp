#include <iostream>
using namespace std;

int rbsearch(int arr[], int start, int end, int x)
{
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
        return rbsearch(arr, mid + 1, end, x);
    else
        return rbsearch(arr, start, mid - 1, x);
}

int main()
{
    int arr[] = {2, 7, 10, 17, 26, 46, 48, 50, 55, 59};
    int index = rbsearch(arr, 0, 9, 46);
    cout << index;
}