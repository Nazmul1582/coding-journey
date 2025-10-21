#include <iostream>
using namespace std;
// find max element of array using a function
int findMax(int *ptr, int size)
{
    int max = 1;
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    return max;
}
int main()
{
    int arr[5] = {23, 45, 65, 34, 12};
    int size = sizeof(arr);                    // int -> 4,     arr[5] -> 20
    int length = sizeof(arr) / sizeof(arr[0]); // 20 / 4 = 5
    cout << "sizeof: " << size << " and length: " << length << endl;
    int result = findMax(&arr[0], length);
    cout << "Result: " << result;
    return 0;
}