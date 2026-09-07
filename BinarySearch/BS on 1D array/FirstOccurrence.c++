#include<bits/stdc++.h>
using namespace std;
int main()
{
   int  N = 7, target = 60, arr[] = {3, 4, 13, 13, 13, 20, 40}   ;
   int low=0,high=N-1,mid;
   int mini=INT_MAX;
   while(low<=high){
    mid=low+(high-low)/2;

    if(arr[mid]>=target){
        mini=min(mini,mid);
        high=mid-1;
    }
    else low=mid+1;
   }
   cout<<mini;
}