#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {2, 3, 1, 1, 4};

    int n = arr.size(), jumps = 0, farthest = INT_MIN,currentEnd=0;
   
        for (int i = 0; i < n-1; i++)
        {
            farthest = max(farthest, i + arr[i]);
    

        if(i==currentEnd){
        jumps++;
        currentEnd=farthest;
       
    }
}
    cout<<jumps;
}

    