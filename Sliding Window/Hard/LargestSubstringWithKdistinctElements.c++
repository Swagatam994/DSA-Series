#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s = "aababbcaacc" ;
   int k = 2;

   int l=0,r=0,maxlen=0;
   unordered_map<char,int>freq;

   while(r<s.size())
   {
        freq[s[r]]++;
        while(freq.size()>k)
        {
            freq[s[l]]--;
            if(freq[s[l]]==0)
                freq.erase(s[l]);
            l++;
        }

        if(freq.size()<=k) 
            maxlen=max(maxlen,r-l+1);

        r++;
   }
   cout<<maxlen;

}