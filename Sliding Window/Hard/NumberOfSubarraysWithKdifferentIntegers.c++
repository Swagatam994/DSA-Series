#include<bits/stdc++.h>
using namespace std;

int findSubstring(vector<int>nums,int k)
{
    int r=0,l=0,count=0;
    unordered_map<int,int>freq;
    while(r<nums.size())
    {
        freq[nums[r]]++;
        while (freq.size()>k)
        {
            freq[nums[l]]--;
            if(freq[nums[l]]==0)
                freq.erase(nums[l]);
            l++;
        }
        count+=r-l;
        r++;
        
    }
    return count;
}
int main()
{
   vector<int> nums = {1,2,1,2,3};
   int k = 2  ;
   cout<<findSubstring(nums,k)-findSubstring(nums,k-1);
}