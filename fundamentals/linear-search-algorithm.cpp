#include <iostream>
using namespace std;

int search(int *arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == x)
        {
            return i;
        }
    }
    return -1;
}
// int search(int arr[], int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

int main()
{
    int arr[5] = {10, 30, 20, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    int target = 20;

    int result = search(arr, length, target);

    if (result == -1)
    {
        cout << target << " is not present in this array.";
    }
    else
    {
        cout << target << " is present at index " << result << endl;
    }
}