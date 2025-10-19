#include <iostream>
using namespace std;

void modify(int *arr, int size)
{
    for (int i = 0; i < 5; i++)
    {
        *(arr + i) *= 2;
    }
}

void printArray(int *arr, int size)
{
    int count = 0;
    while (count < size)
    {
        cout << "Pointer: " << arr + count << " Value: " << *(arr + count) << endl;
        count++;
    }
}

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr = &array[0];
    // cout << ptr << " and " << *ptr << endl;
    // cout << ptr + 1 << " and " << *(ptr + 1) << endl;
    // while (ptr < array + 5)  // ptr -> pointer hexacode  &   array+5 -> last hexacode
    // {
    //     cout << ptr << " and " << *ptr << endl;
    //     ptr++;
    // }
    modify(&array[0], 5);
    printArray(&array[0], 5);
    return 0;
}