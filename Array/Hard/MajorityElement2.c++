#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3,2,3};
    int n = 3;
    int cnt1 = 0, cnt2 = 0, ele1, ele2;
    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 && arr[i] != ele2)
        {
            cnt1 = 1;
            ele1 = arr[i];
        }

        else if (cnt2 == 0 && arr[i] != ele1)
        {
            cnt2 = 1;
            ele2 = arr[i];
        }

        else if (ele1 == arr[i])
            cnt1++;
        else if (ele2 == arr[i])
            cnt2++;

        else
            cnt1--, cnt2--;
    }

    cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele1)
            cnt1++;

        else if (arr[i] == ele2)
            cnt2++;
    }
cout<<cnt1<<cnt2;
    if (cnt1 > floor(n / 3))
        cout << "Majority element is " << ele1<<endl;
    if (cnt2 >floor(n / 3))
        cout << "Majority element is " << ele2;
}