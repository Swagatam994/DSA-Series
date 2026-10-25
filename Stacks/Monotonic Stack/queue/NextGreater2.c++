#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {3, 10, 4, 2, 1, 2, 6, 1, 7, 2, 9};

    int n = nums.size();
    stack<int> s;
    vector<int> result(n);

    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= nums[i % n])
            s.pop();

        if (i < n)
        {
            result[i] = s.empty() ? -1 : s.top();
        }

        s.push(nums[i%n]);
    }

    for(int x:result) cout<<x<<" ";
}