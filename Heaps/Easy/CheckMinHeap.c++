#include<bits/stdc++.h>
using namespace std;

bool minHeap(vector<int> nums)
{
    int n=nums.size();
    for (int i = 0; i < (n/2)-1; i++)
    {
        int left=i*2+1;
        if(left<n && nums[i]>nums[left])
        return false;
        
        int right=i*2+2;
        if(right<n && nums[i]>nums[right])
        return false;
    }
    return true;
    
}
int main()
{
   vector<int> nums = {10, 20, 30, 21, 23};
   cout<<minHeap(nums);
}