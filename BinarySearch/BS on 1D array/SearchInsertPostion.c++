#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = {1,2,4,7}, x = 3;
   int n=4,low=0,high=3,mid;
   int indx=n;

   while(low<=high){
    mid=low+(high-low)/2;
    if(arr[mid]>=x) {
        indx=mid;
        high=mid-1;
    }

    
    else low=mid+1;
   }

  

   cout<<indx;
}