#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[]={1, 2, 1},n=3;
   int l=0,r=0,maxlen=0;
   unordered_map<int,int>basket;//hash map

   while(r<n)
   {
    basket[arr[r]]++;
    while(basket.size()>2)
    {
        basket[arr[l]]--;

        if(basket[arr[l]]==0) basket.erase(arr[l]);

        l++;
    }

    maxlen=max(maxlen,r-l+1);

    r++;
   }

   cout<<maxlen;

}