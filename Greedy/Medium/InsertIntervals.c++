#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> intervals = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    vector<int> newinterval = {2, 5};
    vector<vector<int>> res;
    int i = 0, n = intervals.size();

    while (i < n && newinterval[0] > intervals[i][1])
    {
        res.push_back(intervals[i]);
        i++;
    }

    while (i < n && newinterval[1] >= intervals[i][0])
    {
        newinterval[0] = min(intervals[i][0], newinterval[0]);
        newinterval[1] = max(intervals[i][1], newinterval[1]);
        i++;
    }

    res.push_back(newinterval);

    while (i < n)
    {
        res.push_back(intervals[i]);
        i++;
    }

 
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}