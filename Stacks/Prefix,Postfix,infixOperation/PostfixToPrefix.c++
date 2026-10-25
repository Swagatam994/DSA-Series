#include <bits/stdc++.h>
using namespace std;

string PostfixToPrefix(string str)
{
    stack<string> s;

    for (int i = 0; i < str.length() ; i++)
    {
        char ch = str[i];

        if (isalnum(ch))
            s.push(string(1, ch));

        else
        {
            string op1 = s.top();
            s.pop();

            string op2 = s.top();
            s.pop();

            s.push(ch + op2 + op1);
        }
    }
    return s.top();
}
int main()
{
    string str="abc*+d-";
    cout<<PostfixToPrefix(str);
}