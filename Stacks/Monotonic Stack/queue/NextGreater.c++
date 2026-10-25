#include<bits/stdc++.h>
using namespace std;

vector<int> nextgreatest(vector<int> nums)
{
    stack<int> s;
    
    vector<int>result(nums.size());

    for(int i=nums.size()-1;i>=0;i--)
    {
        while(!s.empty()&& s.top()<=nums[i]) s.pop();

        if(s.empty()) result[i]=-1;

        else result[i]=s.top();

        s.push(nums[i]);
    }
    return result;
}

int main()
{
   vector<int> arr={1,2,1};

   vector<int> res=nextgreatest(arr);

   for(int x:res) cout<<x<<" ";

   
}