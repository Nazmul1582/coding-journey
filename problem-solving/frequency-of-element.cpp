#include <iostream>
#include <map>
using namespace std;
int main()
{
    int arr[6] = {1, 1, 1, 2, 2, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    int current = arr[0];
    int count = 1;
    for (int i = 1; i < len; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count += 1;
            current = arr[i];
        }
        else
        {
            cout << arr[i - 1] << "\t" << count << endl;
            count = 1;
        }
    }
    cout << arr[len - 1] << "\t" << count << endl;

    // map<int, int> list;
    // for (int i = 0; i < len; i++)
    // {
    //     int item = arr[i];
    //     list[item] += 1;
    // }

    // for (const auto &pair : list)
    // {
    //     cout << pair.first << "\t" << pair.second << endl;
    // }
    return 0;
}