#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>arr={3, 5, 4, 1, 1};
   int n=arr.size();
   int S1=0,S2=0;
   for (int i = 0; i < n; i++)
   {
    S1+=arr[i];
    S2+=arr[i]*arr[i];
   }
   int S1N=n*(n+1)/2;
   int S2N=(n*(n+1)*(2*n+1))/6;
   int val1=S1-S1N;
   int val2=S2-S2N;
   val2=val2/val1;

   int x=(val1+val2)/2;
   int y=x-val1;

   cout<<"Repeating number = "<<x<<endl;
   cout<<"Missing number = "<<y<<endl;
}