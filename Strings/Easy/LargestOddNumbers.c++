#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str= "52";
    int indx;
   for (int i =str.length()-1; i >=0; i --)
   {
    if((str[i]-'0')%2==1)
    {
      indx=i;
        break;

    } 
    
   }
   cout<<indx<<endl;
   int i=0;
   while(i<indx && str[i]=='0')i++;

   cout<<str.substr(i,indx-i+1);
   
}