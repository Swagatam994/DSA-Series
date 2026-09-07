#include<bits/stdc++.h>
using namespace std;

int atMost(vector<int>arr,int k)
{
    if(k<0) return 0;
    int l=0,r=0,count=0;
    while(r<arr.size())
    {
        if(arr[r]%2!=0) k--;

        while(k<0)
        {
            if(arr[l]%2!=0) k++;

            l++;
        }

      count+=r-l+1;
      r++;  
    }
    return count;
}
int main()
{
   vector<int> arr={1,1,2,1,1};
   int k=3;
    cout<<atMost(arr,k)-atMost(arr,k-1);
}