#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = {1,1,2,2,3,3,4,5,5,6,6},n=11;
    int low=0,high=n-1,mid;

    while(low<=high){
        mid=low+(high-low)/2;

        if(mid%2==0) {
            if(arr[mid]==arr[mid+1]) low=mid+1;
            else high=mid-1;
        }

        else {
            if(arr[mid]==arr[mid-1]) low=mid+1;

            else high=mid-1;
        }
    }
    cout<<arr[low];
}