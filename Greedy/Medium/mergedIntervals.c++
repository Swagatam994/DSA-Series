#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>>res;
        for(auto interval : intervals)
        {
            if(res.empty() || interval[0]>=res.back()[1]) res.push_back(interval);

            else{
                res.back()[1]=max(interval[1],res.back()[1]);
            }
        }
        return res;
    }
int main()
{
    vector<vector<int>> intervals = {
        {1, 3}, {2, 6}, {8, 10}, {15, 18}
    };

    vector<vector<int>> result = merge(intervals);

    for (auto v : result) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
   
}