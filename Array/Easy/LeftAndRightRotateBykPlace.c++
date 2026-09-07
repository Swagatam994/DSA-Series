#include<iostream>
using namespace std;

void reverse(int *arr,int start,int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void rotate(int *arr,int n,string mov,int k)
{
    if(mov=="left"){
        reverse(arr,0,k-1);

        reverse(arr,k,n-1);

        reverse(arr,0,n-1);
    }

    if(mov=="right")
    {
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
    }
}


int main(){
    int arr[]={1,51,47,96,28,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    string mov="right";
    int k=3;
    rotate(arr,n,mov,k);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    



}