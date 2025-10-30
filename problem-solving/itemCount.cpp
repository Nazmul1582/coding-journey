#include <iostream>
using namespace std;

// find the count of all numbers that are repeating in an array;
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    int current = arr[0];
    int count = 1;

    for (int i = 1; i < len; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count += 1;
        }
        else
        {
            cout << "Item: " << current << " repeat: " << count << endl;
            current = arr[i];
            count = 1;
        }
    }
    cout << "Item: " << arr[len - 1] << " repeat: " << count << endl;
    return 0;
}