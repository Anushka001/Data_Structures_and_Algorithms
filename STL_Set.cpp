#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(6);
    s.insert(6);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(5);
    s.insert(5);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for (int i : s)
    {
        cout << i << endl;
    }

    cout << "Element is present or not?: " << s.count(1) << endl; // tells if element present or not

    set<int>::iterator itr = s.find(1); // returns the iterator of the element if it is present
    cout << "Value at itr: " << *it << endl;

    return 0;
}