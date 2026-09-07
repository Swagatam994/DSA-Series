#include<bits/stdc++.h>
using namespace std;

void Reverse(string &s)
{
    int i=s.length()-1;
    string ans="";

    while(i>=0)
    {
        while(i>=0&&s[i]==' ') i--;

        if(i<0)break;

        int end=i;
        while(i>=0&&s[i]!=' ') i--;
        
        ans+=s.substr(i+1,end-i)+" ";
    }
    cout<<ans;
}
int main()
{
   string s=" Welcome to the jungle";

   Reverse(s);

}