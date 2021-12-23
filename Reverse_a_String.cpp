#include <iostream>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
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
    char name[20];
    cout << "Enter name" << endl;
    cin >> name;
    int length = getlen(name);
    cout << "Length: " << length << endl;

    reverse(name, length);
    cout << "Reversed string is: " << name << endl;
    return 0;
}

/* LEETCODE SOLUTION
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0, e = s.size()-1;
    while(st<e){
        swap(s[st++], s[e--]);
        }
    }
};  */