#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2,2};
    int n = arr.size(), left[n], sum;
    left[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            left[i] = left[i - 1] + 1;

        else
            left[i] = 1;
    }
    sum=left[n-1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > arr[i + 1])
        {
            left[i] = max(left[i], left[i+1] + 1);
        }

        sum += left[i];
    }

    cout << sum;
}