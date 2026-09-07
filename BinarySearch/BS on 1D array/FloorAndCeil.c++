#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5;
   int low=0,high=n-1,mid;
   int floor=INT_MIN,ceil=INT_MAX;
   while(low<=high){
    mid=low+(high-low)/2;
    if(arr[mid]==x){
        floor=x,ceil=x;
        break;
    }

    else if(arr[mid]>x) {
        high=mid-1;
       ceil=min(ceil,arr[mid]);
    }

    else {
        low=mid+1;
     floor=max(floor,arr[mid]);
    }

    
   }
   cout<<floor<<","<<ceil;
}