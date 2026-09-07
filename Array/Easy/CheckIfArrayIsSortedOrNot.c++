#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1,2, 4,7, 8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool cond;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cond = true;
            break;
        }
    }
    if(cond)
    cout<<"The array is not sorted";
    else
    cout<<"The array is sorted";
}