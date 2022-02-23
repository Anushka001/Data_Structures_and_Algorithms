/* Problem Statement
You're given string ‘STR’ consisting solely of “{“, “}”, “(“, “)”, “[“ and “]” . Determine whether the parentheses are balanced.

Input Format:
The first line contains an Integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.
The first and the only line of input of each test case contains a string, as described in the task.

Output Format:
For each test case, the first and the only line of output prints whether the string or expression is balanced or not.
The output of every test case is printed in a separate line.    */

#include <iostream>
#include <stack>
using namespace std;
bool isValidParenthesis(string expression)
{
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];

        // if opening bracket, push in stack
        // if closing bracket, check top of stack and pop
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else
        {
            // closing bracket
            if (!s.empty())
            {
                char top = s.top();
                if ((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{'))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty())
        return true;
    else
        return false;
}

int main() {}