#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 5, 5, 8, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lst_indx = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[lst_indx])
        {
            lst_indx++;
            arr[lst_indx] = arr[i];
        }

        

    }

    for (int i = 0; i < lst_indx+1; i++)
    {
        cout<<arr[i]<<",";
    }
    
}