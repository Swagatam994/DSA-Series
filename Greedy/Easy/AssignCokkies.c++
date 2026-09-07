#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>student={1, 2, 3};
   vector<int>cookies={1,1};
   sort(student.begin(),student.end());
   sort(student.begin(),student.end());
   int i=0,j=0;

   while(i<student.size() && j<cookies.size())
   {
    if(student[i]<=cookies[j])
    {
        i++;
        j++;
    }
    else j++;
   }
   cout<<"The number of Students is :"<<i;
}