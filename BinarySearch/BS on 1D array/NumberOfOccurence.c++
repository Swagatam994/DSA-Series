#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 7, X = 3, arr[] = {2, 2, 3, 3, 3, 3, 4};
    int low = 0, high = N - 1, mid;
    int mini = INT_MAX, maxi = INT_MIN;
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] >= X)
        {
            mini = min(mini, mid);
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    low = 0, high = N - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] <= X)
        {
            maxi = max(maxi, mid);
            low=mid+1;
        }
        else
            high = mid- 1;
    }
    cout<<mini<<","<<maxi<<endl;
    cout<<maxi-mini;
}