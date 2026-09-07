#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,0,1,1,1,1,1,0,1,1,1,1};
    int cnt=0,maxm=0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==1){
            cnt++;
        }
        else{
           
            cnt=0;
        }
        maxm=max(cnt,maxm);
    }
    

    cout<<maxm;
    
}