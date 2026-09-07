#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str1="ABC",str2="CAA";

   int n1=str1.length(),n2=str2.length();
   if(n1!=n2) 
   {
    cout<<"Not anagram";
    return 0;
   }

   int freq[26]={0};

   for (int i = 0; i <n1; i++)
   {
    freq[str1[i]-'A']++;
   }
   for (int i = 0; i <n1; i++)
   {
    freq[str2[i]-'A']--;
   }

   for (int i = 0; i < 26; i++)
   {
    if(freq[i]>0) 
    {
        cout<<"Not Anagram";
        return 0;
    }
   }
   cout<<"Anagram";
   
   
   
}