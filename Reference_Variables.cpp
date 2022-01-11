#include <iostream>
using namespace std;

void update(int n)
{
    n++;
    //  the value of n didn't change because this is function call by value. So a copy of the variable n is sent to the function which is incremented. But in the main function, the original n is present whose value is 5. So that value will be printed.
}

void update2(int &n)
{
    n++;
    //  Here, the incremented value of n will be printed because we created 'n' as a reference variable, which means we added a name of the original variable and sent to the function. So it incremented in the main function as well. And as a result, incremented value of n printed.
}

int main()
{
    /*
    int i = 5;

    // creating a reference variable
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
   */

    int n = 5;
    cout << "Before value of n: " << n << endl;
    update(n); // n = 5
    cout << "After value of n: " << n << endl;

    cout << "Before value of n: " << n << endl;
    update2(n); // n = 6
    cout << "After value of n: " << n << endl;

    return 0;
}