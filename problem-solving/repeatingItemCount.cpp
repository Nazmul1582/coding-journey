#include <iostream>
#include <map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    map<int, int> item_count;
    for (int i = 0; i < len; i++)
    {
        int el = arr[i];
        item_count[el] += 1;
    }

    // cout << item_count[3];  // 2
    for (const auto &pair : item_count)
    {
        cout << "Element: " << pair.first << "\t count: " << pair.second << endl;
    }
    return 0;
}