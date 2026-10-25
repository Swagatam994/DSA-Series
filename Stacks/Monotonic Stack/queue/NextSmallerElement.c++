#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> nums={4, 8, 5, 2, 25};
   int n=nums.size();

   stack<int>s;
   vector<int> res(n);

   for (int i = n-1; i >=0; i--)
   {
        while(!s.empty() && s.top()>=nums[i]) s.pop();

        if(s.empty()) res[i]=-1;

        else  res[i]=s.top();

        s.push(nums[i]);
   }
   
   for(int x:res) cout<<x<<" ";
}