#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str="1432219";
   int k=3;
   stack<char> ch;

   for(int i=0;i<str.length();i++)
   {
        while(!ch.empty() && k>0 && ch.top()-'0'>str[i]-'0')
        {
            ch.pop();
            k--;
        }
        ch.push(str[i]);
    }
        while(k>0)
        {
            ch.pop();
            k--;
        }

        if(ch.empty())
        {
            cout<<0;
            return 0;
        }

        string res="";
        while(!ch.empty())
        {
            res+= ch.top();
            ch.pop();
        }

        while(res.size()!=0 && res.back()=='0')
        {
            res.pop_back();
        }

   int n=res.size();
   reverse(res.begin(),res.end());

   if(res.empty())
   {
    cout<<0;
    return 0;
   }
   cout<< res;

}