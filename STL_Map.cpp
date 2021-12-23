#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "key";
    m[2] = "hello";
    m[12] = "world";
    m.insert({5, "programming"});

    cout << "Before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Find 12: " << m.count(12) << endl;

    m.erase(12);
    cout << endl
         << "After erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}