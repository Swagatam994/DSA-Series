#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s = "(()())(())";
   string result="";
   int level=0;
   
   for (char i :s)
   {
    if(i=='(') {
        if(level>0)result +=i;

        level++;
    }
    else if(i==')'){
        level--;
       if(level>0) result+=i;
        
    }

   }
   cout<<result;
   
}