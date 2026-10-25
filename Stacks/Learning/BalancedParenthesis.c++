#include<bits/stdc++.h>
using namespace std;

bool check(string str)
{
 stack<char> arr;
   for(char x:str)
   {
    if(x=='('||x=='{'||x=='[') arr.push(x);

    else{
        if(arr.empty()) return false;
        char top=arr.top();
        arr.pop();

        if(x==')'&&top=='('||
           x=='}'&&top=='{'||
           x==']'&&top=='[')
           continue;
        
           else return false;
    }

   }
   return arr.empty();
}
int main()
{
    string str="[([])]";
   cout<<check(str);

  
}