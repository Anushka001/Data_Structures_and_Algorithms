// Print Counting --> i/p = 5, o/p = 5 4 3 2 1

#include <iostream>
using namespace std;

void print(int n)
{
    // base condition
    if (n == 0)
        return;

    cout << n << " ";  //--> This is head recursion. This will result in printing counting in descending order.

    //Recursive relation
    print(n - 1);

    //cout << n << " "; //--> This is tail recursion. This will result in printing counting in ascending order.

}

int main()
{
    int n;
    cout <<"Enter a number to print its counting in descending order:" << endl;
    cin >> n;
    
    cout <<"The counting is:" << endl;
    print(n);

    return 0;

}