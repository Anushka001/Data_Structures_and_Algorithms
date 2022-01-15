// 1. Factorial of a number using recursion

/*
#include <iostream>
using namespace std;

int fact(int n)
{
    // base condition
    if (n == 0)
        return 1;

    // recursive relation
    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number to find its factorial:" << endl;
    cin >> n;

    int ans = fact(n);
    cout << "The factorial of " << n << " is: " << ans << endl;

    return 0;
}
*/

// 2. Power of 2
#include <iostream>
using namespace std;

int power(int n)
{
    // base condition
    if (n == 0)
        return 1;

    // recursive relation
    return 2 * power(n - 1);

}

int main()
{
    int n;
    cout << "Enter the power of 2" << endl;
    cin >> n;
    int ans = power(n);
    cout <<"2 raised to the power " << n << " is: " << ans << endl;

    return 0;
}
