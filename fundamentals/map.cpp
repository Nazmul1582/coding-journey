#include <iostream>
#include <map>
using namespace std;

int main()
{
    // declare a map;
    map<string, int> marklist;
    // assign value in map;
    marklist["Fahim"] = 90;
    marklist["Nahid"] = 80;
    marklist["Nafiz"] = 70;
    marklist["Sifat"] = 60;
    marklist["Jaber"] = 50;

    // print map value;
    cout << marklist["Fahim"] << endl;
    cout << marklist["Nahid"] << endl;
    cout << marklist["Jaber"] << endl;
    // output:
    // 90
    // 80
    // 50

    // iteration through the map
    for (const auto &pair : marklist)
    {
        cout << "key: " << pair.first << " value: " << pair.second << endl;
    }
    // output: shows in ascending format by default
    // key: Fahim value: 90
    // key: Jaber value: 50
    // key: Nafiz value: 70
    // key: Nahid value: 80
    // key: Sifat value: 60
}