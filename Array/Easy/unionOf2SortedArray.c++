#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[],int arr2[],int n,int m){
    vector<int> result;
    int i=0,j=0;
    while(i<n && j<m){

        if(arr1[i]<arr2[j]){
            if(result.empty()||result.back()!=arr1[i])
            result.push_back(arr1[i]);
         i++;
        }

        else if(arr2[j]<arr1[i]){
            if(result.empty() || result.back()!=arr2[j])
            result.push_back(arr2[j]);
         j++;
        }

        else{
            if(result.empty() || result.back()!=arr2[j])
            result.push_back(arr2[j]);
         i++,j++;
        }

        
    }

    while(i<n){
         if(result.empty() || result.back()!=arr1[i])
            result.push_back(arr1[i]);
        i++;
    }

    while(j<m){
         if(result.empty() || result.back()!=arr2[j])
            result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main(){

    int arr1[]={1,8,14,15,21,39,67,88};
    int arr2[]={2,14,25,78};
    int n=8,m=4;
    vector<int> Union=findUnion(arr1,arr2,n,m);

    cout<<"The union of two arrays are\n";
    for(int val :Union) cout<<val <<" ";


}