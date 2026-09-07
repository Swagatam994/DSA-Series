#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector <int> start = {900, 1100, 1235};
  vector <int> end = {1000, 1200, 1240};

  sort(start.begin(),start.end());
  sort(end.begin(),end.end());

    int s=0,e=0,plat=0,max_plat=0;
  while(s<start.size()-1)
  {
    if(end[e]<start[s]){
        e++;
        plat--;
    }
   else{
    s++;
    plat++;
    max_plat=max(plat,max_plat);
   }

  }

  cout<<max_plat;
}