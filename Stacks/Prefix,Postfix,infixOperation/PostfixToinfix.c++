#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str="ab*cd/+";

   stack<string> s;

   for(int i=0;i<str.length();i++)
   {
    char ch=str[i];

    if(isalnum(ch)) s.push(string(1,ch));

    else{
        string op1=s.top();
        s.pop();
        string op2=s.top();
        s.pop();

        s.push('('+op2+ch+op1+')');
    }
   }
   cout<<s.top();
}