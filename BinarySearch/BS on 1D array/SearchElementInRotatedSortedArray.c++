#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[]={4, 5, 6, 7, 0, 1, 2},n=7,k=0;
   int low=0,high=n-1,mid;

   while(low<=high){
    mid=low+(high-low)/2;
    if(a[mid]==k){
        cout<<mid;
        break;
    }

     if(a[mid]>a[low]){
        if(a[low]<=k && a[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    else{
        if(a[high]>=k && a[mid]<k){
            low=mid+1;
        }
        else high=mid-1;
    }


   }
}