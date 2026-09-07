#include <iostream>
using namespace std;

void move(int *arr, int n, int i, int j)
{

    while (j < n)
    {
        if (arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
            j=i+1;
        }
        else{
            j++;
        }

    }
}

int main()
{

    int arr[] = {4,2,4,0,0,3,0,5,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i + 1;
            move(arr, n, i, j);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}