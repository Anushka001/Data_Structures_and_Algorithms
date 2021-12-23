#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // size = 0
    vector<int> a(5, 1);
    /* here 5 is the size of vector and 1 means all the elements will be initialised by 1. If we do not specify initialisation here, the elements will be automatically initialised by 0. */

    cout << "Print a: " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> last(a); // all elements of vector "a" will be copied to "last"
    cout << "Print last: " << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(1); // add element to vector
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(3); // here capacity is 4 because the dynamic array doubles its size
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Size: " << v.size() << endl; // size of vector

    cout << "Element at index 2 is: " << v.at(2) << endl;

    cout << "Front: " << v.front() << endl; // first element
    cout << "Back: " << v.back() << endl;   // last element

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); // deletes last element
    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    /* Clear means to remove all elements from vector. When we are using clear function in vector, the size of array will be zero. But its capacity (memory allocated to it) will not be zero.*/

    cout << "Size before clear: " << v.size() << endl;
    v.clear();
    cout << "Size after clear: " << v.size() << endl;

    return 0;
}