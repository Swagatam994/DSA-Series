#include<bits/stdc++.h>
using namespace std;
int MaximumElement(vector<vector<int>>&arr,int col,int n){
    int indx,max=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[i][col]>max)
        {
            max=arr[i][col];
            indx=i;
        }
    }
    return indx;
    
}
int main()
{
   vector<vector<int>> arr={ {10,20,15},{21,30,14},{7,16,32}};
   int n=arr.size(),m=arr[0].size();
   int low=0,high=m-1;

   while(low<=high){
    int mid=low+(high-low)/2;
    int row=MaximumElement(arr,mid,n);
    int left= (mid-1)<0?INT_MIN:arr[row][mid-1];
    int right=(mid+1)>m-1?INT_MIN:arr[row][mid+1];

    if(arr[row][mid]>left && arr[row][mid]>right)
    {
        cout<<row<<","<<mid;
        return 0;
    }

    else if(arr[row][mid]<left) high=mid-1;

    else low=mid+1;


   }

   cout<<"{-1,-1}";


}