#include <bits/stdc++.h>
using namespace std;
int TwoSum(vector<int> arr, int k, int n)
{
    int left = 0, right = n - 1,sum=0;
    vector<pair<int, int>> arrwithIndex;
    for (int i = 0; i < n; i++)
    {
        arrwithIndex.push_back({arr[i], i});
    }

    sort(arrwithIndex.begin(), arrwithIndex.end());
    // {2,0},{5,2},{6,1},{8,3},{11,4}

    while (left < right)
    {
        sum = arrwithIndex[left].first + arrwithIndex[right].first;

        if (sum == k)
        {
            cout << "YES, indices:- " << arrwithIndex[left].second << "," << arrwithIndex[right].second;
            return 0;
        }

        if (sum > k)
            right--;

        else
            left++;
    }

    cout<<"No two Sum found";
}
int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int k = 10, n = 5;
    TwoSum(arr,k,n);
}