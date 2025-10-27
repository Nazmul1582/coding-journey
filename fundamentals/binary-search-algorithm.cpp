#include <iostream>
using namespace std;

int binarySearch(int arr[], int len, int target)
{
    int low = 0;
    int high = len - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {2, 5, 9, 12, 15};
    int len = sizeof(arr) / sizeof(arr[0]);
    int target = 19;
    int result = binarySearch(arr, len, target);
    if (result != -1)
        cout << target << " is present at index " << result;
    else
        cout << target << " is not present in array";
    return 0;
}