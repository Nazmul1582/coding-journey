#include <iostream>
using namespace std;

// find max from the array
// array element inside the array must be >= zero
int arr[5] = {23, 89, 34, 98, 47};
int main()
{
    int max = 1;
    for (int i = 0; i < 5; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}
