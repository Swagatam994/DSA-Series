#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[]={4,5,6,7,0,1,2,3},n=8;

   int low=0,high=n-1,mid;

   while(low<high){
    mid=low+(high-low)/2;
    if(arr[mid]>arr[high]){
        low=mid+1;
    }
    else  high=mid-1;

   }
   cout<<"The minimum element is "<<arr[low];
}