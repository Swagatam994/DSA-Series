#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>nums={6, 8, 0, 1, 3};
   int n=nums.size();

   stack<int>s;
   vector<int>res(n);

   for(int i=n-1;i>=0;i--)
   {
    while(!s.empty() && s.top()<=nums[i]) s.pop();

    res[i]=s.size();

    s.push(nums[i]);
   }
   for(int x:res) cout<<x<<" ";
}