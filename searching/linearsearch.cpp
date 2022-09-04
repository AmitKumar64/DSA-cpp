#include <iostream>
using namespace std;
int linearsearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {12, 34, 2, 3, 1, 6, 5, 87, 56, 23};
    int target, size = 10;
    cout << "Enter the target value to search : ";
    cin >> target;
    int ans = linearsearch(arr,size,target);
    cout<<ans;
}