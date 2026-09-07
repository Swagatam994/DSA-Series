#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[]={1,2,2,3}, x = 2,result=INT_MAX;
   int low=0,high=3,mid;
    while(low<=high){
        mid=low+(high-low)/2;

        if(a[mid]>x){
            result=min(result,mid);
            high=mid-1;
        }
        else if(a[mid]==x) low=mid+1;

        else low=mid+1;
    }
    cout<<result;
}