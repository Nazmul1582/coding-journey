#include <iostream>
using namespace std;

// find max from the array
// array element inside the array must be >= zero
// int arr[5] = {23, 89, 34, 98, 47};
// int main()
// {
//     int max = 1;
//     for (int i = 0; i < 5; ++i)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     cout << max;
//     return 0;
// }

// array element inside the array must be >= -100;
int arr[5] = {-40, 25, -89, -57, 23};
int main()
{
    int max = -100;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}