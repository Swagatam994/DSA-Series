#include<bits/stdc++.h>
using namespace std;

bool result(vector<int>& arr,int n)
{
    int maxidx=0;
    for (int i = 0; i < n; i++)
    {
        if(i>maxidx) return false;

        maxidx=max(maxidx,arr[i]+i);
    }
    return true;
}
int main()
{
   vector<int>arr={2, 3, 1, 0, 4};
   int n=arr.size();

   cout<<result(arr,n);
}