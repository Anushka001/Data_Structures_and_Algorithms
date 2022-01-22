/* Check if a given string is Palindrome or not using Recursion */

#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;
    else
        return checkPalindrome(str, i+1, j-1);
}
int main()
{
    string str = "abbccbba";
    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);

    if (isPalindrome)
        cout << "This is a Palindrome" << endl;
    else
        cout << "This is not a Palindrome" << endl;
    return 0;
}