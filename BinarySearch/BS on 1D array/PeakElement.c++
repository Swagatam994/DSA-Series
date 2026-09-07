#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1}, n = 10;
    int low = 0, high = n - 1, mid;

    if (n < 2)
        cout << arr[0];
    else
    {
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (arr[mid] < arr[mid + 1])
                low = mid + 1;

            else
                high = mid - 1;
        }
        cout << arr[low];
    }
}