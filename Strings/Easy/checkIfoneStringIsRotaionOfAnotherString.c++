#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s="hello" , goal="llohe";
    if(s.length()!=goal.length())
    {
         cout<<"false";
         return 0;
    }
   string test=s+s;
   int start=0;
  while(start<=test.length())
   {
    if(test.substr(start,s.length())==goal) {
        cout<<"True";
        return 0;
    }

    else start++;
   }
   cout<<"false";
   
}