#include <iostream>
using namespace std;

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
int main()
{
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "first index: " << i << " & second index: " << j << endl;
            }
        }
    }
    return 0;
}