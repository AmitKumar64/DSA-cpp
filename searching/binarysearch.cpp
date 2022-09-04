#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < mid)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    //In binarysearch Searching work only on sorted array.
    int arr[10]= {1,3,5,8,12,17,21,26,29,34};
    int size = 10;
    int target = 34 ;
    int ans = binarysearch(arr,size,target);
    cout<<ans;
}