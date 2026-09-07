#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>&arr,int m,int k)
{
    int low=0,high=m-1,ans;
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==k)
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr = {{1, 1, 1},
                               {0, 0, 1},
                               {0, 0, 0}};
    int n=3,m=3;
    int count_max=-1,indx=-1;
    for (int i = 0; i < n; i++)
    {
        int count_ones=m-lowerBound(arr[i],m,1);
        if(count_ones>count_max)
        {
            count_max=count_ones;
            indx=i;
        }
    }
    cout<<indx;
    
    
}