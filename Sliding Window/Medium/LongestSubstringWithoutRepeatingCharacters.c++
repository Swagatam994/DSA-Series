#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s="abcaabcdba";
   int hashLen=256;
   int hash[hashLen];

   for(int i=0;i<256;i++)
   {
    hash[i]=0;
   }

   int l=0,r=0,maxlen=0;

   while(r<s.length())
   {
    if(hash[s[r]]>0)
    {
        hash[s[l]]=0;
        l++;
        continue;
    }
    hash[s[r]]++;
    maxlen=max(maxlen,(r-l+1));
    r++;


   }
   cout<<maxlen;
}