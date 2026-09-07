#include<iostream>
using namespace std;

int main(){
    int arr[]={12,47,89,22,36,8,40};
    int min=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if(min<arr[i])
        min=arr[i];
    }

    cout<<min;
    

}