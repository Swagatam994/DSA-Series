#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s="(1+(2*3)+((8)/4))+1";
   int n=s.length();
   int count=0,maxdepth=0;

   for(char ch:s)
   {
    if(ch=='(')
    {
        count++;
        maxdepth=max(maxdepth,count);
    }

    else if(ch==')') count--;
   }
   cout<<maxdepth;
}