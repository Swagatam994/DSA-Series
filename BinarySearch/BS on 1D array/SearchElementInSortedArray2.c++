#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[]={7, 8, 1, 2, 3, 3, 3, 4, 5, 6},k=9,n=10;

   int low=0,high=n-1,mid;
   bool present;

   while(low<=high){
    mid=low+(high-low)/2;

    if(arr[mid]==k){
        present=true;
        break;
    }

    if(arr[low]<=arr[mid]){

        if(arr[low]<=k && arr[mid]>k)  high=mid-1;

        else low=mid+1;
    }

    else{
        if(arr[high]>=k && arr[mid]<k)  low=mid+1;

        else high=mid-1;
    }
   }

   cout<<bool(present);
}