#include <iostream>
using namespace std;

bool checkPalindrome(char a[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (a[s] != a[e])
            return 0;
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int getlen(char name[])
{
    int len = 0;
    for (int i = 0; name[i] != '\0'; ++i)
    {
        len++;
    }
    return len;
}

int main()
{
    char str[20];
    cout << "Enter a string:" << endl;
    cin >> str;
    int len = getlen(str);
    cout << "Palindrome or not ('1' for True, '0' for False): " << checkPalindrome(str, len);
    return 0;
}