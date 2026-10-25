#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>arr={0,1,0,2,1,0,1,3,2,1,2,1};
   int n=arr.size();
   int res=0;
   vector<int>prefixMax(n);
   vector<int>suffixMax(n);

   prefixMax[0]=arr[0];
   suffixMax[n-1]=arr[n-1];

   for(int i=1;i<n;i++)
    prefixMax[i]=max(prefixMax[i-1],arr[i]); 

   for(int i=n-2;i>=0;i--)
    suffixMax[i]=max(suffixMax[i+1],arr[i]);

    for(int i=0;i<n;i++)
    {
        int leftMax=prefixMax[i], rightMax=suffixMax[i];
        if(arr[i]<leftMax && arr[i]<rightMax)
        {
            res+=min(leftMax,rightMax)-arr[i];
        }
    }

    cout<<res;
}