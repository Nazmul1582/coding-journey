#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = &arr[0]; // or, int* ptr = arr
    cout << "Pointer of first element: " << ptr << endl;
    cout << "And the value of pointer: " << *ptr << endl;
    ptr++;
    cout << "Pointer of 2nd element: " << ptr << endl;
    cout << "And the value of pointer is: " << *ptr << endl;
    return 0;
}