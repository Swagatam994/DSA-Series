#include <bits/stdc++.h>
using namespace std;

bool isOperator(char ch)
{
     return ch == '+' || ch == '-' ||
           ch == '*' || ch == '/' ||
           ch == '^';
        
}

int precedence(char ch)
{
    if (ch == '^')
        return 3;

    else if (ch == '*' || ch == '/')
        return 2;

    else if (ch == '+' || ch == '-')
        return 1;

    else
        return -1;
}

string InfixToPostfix(string s)
{
    s = "(" + s + ")";
    stack<char> str;
    string result = "";
    int i = 0;

    for (char ch : s)
    {
        if (isalnum(ch))
            result += ch;

        else if (ch == '(')
            str.push(ch);
        else if (ch == ')')
        {
            while (!str.empty() && str.top() != '(')
            {
                result += str.top();
                str.pop();
            }
            str.pop();
        }

        else if (isOperator(ch))
        {
            if (ch == '^')
            {
                while (!str.empty() && precedence(ch) <= precedence(str.top()))
                {
                    result += str.top();
                    str.pop();
                }
            }

            else
            {
                while (!str.empty() && precedence(ch) < precedence(str.top()))
                {
                    result += str.top();
                    str.pop();
                }
            }
            str.push(ch);
        }
    }

    while (!str.empty())
    {
        result += str.top();
        str.pop();
    }

    return result;
}

string InfixToPrefix(string s)
{
    int l = s.size();

    reverse(s.begin(), s.end());

    for (int i = 0; i < l; i++)
    {
        if (s[i] == '(')
        {
            s[i] = ')';
            
        }

        else if (s[i] == ')')
        {
            s[i] = '(';
           
        }
    }

    string prefix = InfixToPostfix(s);

    reverse(prefix.begin(), prefix.end());

    return prefix;
}
int main()
{
    string s = "x+y*z/w+u";

    cout << InfixToPrefix(s);
}