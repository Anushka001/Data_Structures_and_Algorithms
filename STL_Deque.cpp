#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);  // add element from front
    d.push_front(2); // add element from back

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();  // delete element from back
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    // d.pop_front();  // delete element from front
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    cout << "Element at first index: " << d.at(1) << endl;

    cout << "Front element is: " << d.front() << endl;
    cout << "Back element is: " << d.back() << endl;

    cout << "Empty or not?: " << d.empty() << endl;

    cout << "Before erasing: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // Erase element. Here we have to give an element or a range to erase
    cout << "After erasing: " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}