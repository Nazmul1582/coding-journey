#include <iostream>
#include <map>
using namespace std;

int main()
{
    int arr[] = {12, 2, 3, 4, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    bool isDuplicate;
    int duplicate;

    map<int, int> list;
    for (int i = 0; i < len; i++)
    {
        list[arr[i]]++;
    }
    for (const auto &pair : list)
    {
        if (pair.second > 1)
        {
            isDuplicate = true;
            duplicate = pair.first;
        }
    }
    if (isDuplicate)
    {
        cout << "The number " << duplicate << " appears multiple times in the array";
    }
    else
        cout << "All elements are distinct in the array";
    return 0;
}