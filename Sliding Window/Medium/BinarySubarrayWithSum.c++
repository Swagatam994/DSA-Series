#include <bits/stdc++.h>
using namespace std;
int atMost(vector<int> arr,int goal){
    int l = 0, r = 0,  count = 0;
int sum = 0;
    while (r <arr.size())
    {   
        if(goal<0) return 0;
        sum+=arr[r];
        while (sum>goal)
        {   
            
            sum -= arr[l];
            l++;
        }
        count+=r-l+1;
        r++;
    }
    return count;
}
int main()
{
    vector<int>arr = {0,0,0,0,0,0};
    int goal = 0;
    cout<<atMost(arr,goal)-atMost(arr,goal-1);
    
}