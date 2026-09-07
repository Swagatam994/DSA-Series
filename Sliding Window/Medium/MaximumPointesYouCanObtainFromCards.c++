#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 3, lsum = 0, rsum = 0, maxsum = 0;
    for (int i = 0; i < k; i++)
        lsum += arr[i];
    maxsum = lsum;
    int rindx = arr.size() - 1;
    for (int i = k - 1; i >= 0; i--)
    {
        lsum -= arr[i];
        rsum += arr[rindx];
        maxsum = max(maxsum, lsum + rsum);
        rindx--;
    }
    cout << maxsum;
}