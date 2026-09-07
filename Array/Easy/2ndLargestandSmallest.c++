#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[]={12,47,89,22,36,8,40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondsmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest=largest;
            largest = arr[i];
        }

        if(arr[i]<smallest){
            secondsmallest=smallest;
            smallest=arr[i];
        }
    }

    cout<<secondLargest<<" "<<secondsmallest;
}