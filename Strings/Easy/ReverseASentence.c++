#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str="Hi there i  ";
   string result="";
  int i=str.length()-1;
   while(i>=0)
   {
    while(i>=0&&str[i]==' ') i--;

    if(i<0) break;
    
    int end=i;
    while(i>=0 && str[i]!=' ') {
        i--;
        }

    string word=str.substr(i+1,end-i);

    if(!result.empty())
    {
        result+=" ";
    }
    
    
        result+=word;
    
    

   }
   cout<<result;
}