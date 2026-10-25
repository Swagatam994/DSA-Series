#include <bits/stdc++.h>
using namespace std;

int prec(int x)
{
    if(x=='^') return 3;

    if(x=='*'||x=='/') return 2;
    
    if(x=='+'|| x=='-') return 1;

    else return -1;
    
}

vector<char> infixToPostfix(string exp)
{
    stack<char> arr;
    vector<char> result;

    for(int i=0;i<exp.length();i++)
    {
        char ch=exp[i];

        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>=0&&ch<=9))  result.push_back(ch);

        else if(ch=='(') arr.push(ch);

        else if(ch==')')
        {
            while(arr.top()!='(')
            {
                result.push_back(arr.top());
                arr.pop();
            }
            arr.pop();
        }

        else 
        {
            while(!arr.empty() && prec(ch)<=prec(arr.top()))
            {
                result.push_back(arr.top());
                arr.pop();
            }
            arr.push(ch);
        }
    }

    while(!arr.empty())
    {
        result.push_back(arr.top());
        arr.pop();
    }
    return result;
}

int main()
{
    string exp = "(p+q)*(m-n)"; // Infix expression
    cout << "Infix expression: " << exp << endl;
    cout <<"Postfix expression \n" ;
    vector<char>result=infixToPostfix(exp);
    for(auto ch:result)
    {
        cout<<ch;
    }
}