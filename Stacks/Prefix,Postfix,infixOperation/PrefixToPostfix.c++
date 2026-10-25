#include<bits/stdc++.h>
using namespace std;

string PrefixToPostfix(string str)
{
    stack<string> s;

    for(int i=str.length()-1;i>=0;i--)
    {
        char ch=str[i];

        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>=0&&ch<=9))
        {
            s.push(string(1,ch));
        }

        else
        {
            string op1=s.top();
            s.pop();

            string op2=s.top();
            s.pop();

            s.push(op1+op2+ch);
        }
    }

    return s.top();

    
}
int main()
{
   string str="*+ab-cd";
   cout<<PrefixToPostfix(str);
}