// Majority element is the element that occurs more than n/2 times
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int count = 1, element=arr[0], n = 9;

    for (int i = 1; i < n; i++)
    {
        if (count == 0)
        {   count=1;
            element = arr[i];
        }
        else if (arr[i] == element)
        {
            count++;
        }
        else
            count--;
    }

    cout << "The majority element is : " << element;
}