/* Problem Statement
You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.

Input Format :
The first line of input contains a single integer 'T', representing the number of test cases.
The first line of each test contains three space-separated integers 'X', 'N', and 'M'.

Output Format :
For each test case, return a single line containing the value of ('X' ^ 'N') % 'M'.

Sample Input 1:
2
3 1 2
4 3 10

Sample Output 1:
1
4  */

#include <iostream>

using namespace std;
int modularExponentiation(int x, int n, int m)
{
    // Write your code here.
    int result = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            // odd
            result = (1LL * (result) * (x) % m) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
    }
    return result;
}

int main(){}