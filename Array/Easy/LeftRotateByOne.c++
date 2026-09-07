#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,64,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp=arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    


}