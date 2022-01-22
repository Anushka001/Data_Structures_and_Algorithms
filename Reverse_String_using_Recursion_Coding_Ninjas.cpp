/* Problem Statement
You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters]. You have to find the reverse of the string.

For example:
If the given string is: STR = "abcde". You have to print the string "edcba".

Follow Up:
Try to solve the problem in O(1) space complexity. 

Input Format:
The first line of input contains a single integer 'T', representing the number of test cases or queries to be run. 
Then the 'T' test cases follow.
The first and only line of each test case contains a string 'STR'.

Output Format:
For each test case, print a single line containing a single string denoting the reverse of the given string 'STR'.
The output of each test case will be printed in a separate line.  */

#include <iostream>
using namespace std;

void reverseStr(string& str, int i, int j)
{
    // base case
    if(i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    reverseStr(str, i, j);

}
string reverseString(string str)
{
	reverseStr(str, 0 , str.length()-1);
    return str;
}

int main() {}