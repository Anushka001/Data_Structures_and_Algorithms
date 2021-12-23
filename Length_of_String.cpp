#include <iostream>
#include <string.h>
using namespace std;

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
    cout << "Length: " << getlen(name) << endl;
    return 0;
}