#include<bits/stdc++.h>
using namespace std;
bool change(vector<int> arr)
{
    int five=0,ten=0;
   int change=0;
   for (int i = 0; i < arr.size(); i++)
   {
    if(arr[i]==5) five++;

    else if(arr[i]==10)
    {
        if(five>0) 
        {
            five--;
            ten++;
        }

        else return false;
    }

    else 
    {
        if(five>0 && ten>0) 
        {
            five--;
            ten--;
        }
        else if(five>=3) five-=3;

        else return false;
       
    }

   }
   return true;
}
int main()
{
   vector<int> arr={5,5,10,10};
   cout<<change(arr);
   
}