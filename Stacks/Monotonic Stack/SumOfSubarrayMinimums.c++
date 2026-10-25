#include<bits/stdc++.h>
using namespace std;

vector<int>findNSE(vector<int>arr)
{
    stack<int>st;
    int n=arr.size();
    vector<int> res(n,n);

    for(int i=arr.size()-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]>arr[i]) st.pop();

        if(!st.empty()) res[i]=st.top();

       

        st.push(i);

    }

    return res;
}
vector<int>findPSE(vector<int>arr)
{
    stack<int> st;
    vector<int>res(arr.size(),-1);

    for(int i=0;i<arr.size();i++)
    {
        while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();

        if(!st.empty()) res[i]=st.top();

        st.push(i);
    }
    return res;
}
int main()
{
   vector<int>arr={3, 1, 2, 4};
   vector<int>nse=findNSE(arr);
   vector<int>pse=findPSE(arr);
   long long total=0;
   long long mod = 1000000007;
   for(int i=0;i<arr.size();i++)
   {
    int left=i-pse[i];
    int right=nse[i]-i;

    total=(total+(left*right*1LL*arr[i])%mod)%mod;
   }

   cout<<total;


}