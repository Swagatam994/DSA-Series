#include <bits/stdc++.h>
using namespace std;

struct jobs
{
    int id;
    int deadline;
    int profits;
};

bool cmp(jobs a, jobs b)
{
    return a.profits > b.profits;
}

int main()
{
    int n = 4;
    jobs arr[n] = {{1, 4, 20}, {2, 1, 10}, {3, 2, 40}, {4, 2, 30}};
    int maxi = 0,totalProfit=0;
    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        maxi = max(arr[i].deadline, maxi);
    }
    int slot[maxi + 1];

    for (int i = 0; i <= maxi; i++)
    {
        slot[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = arr[i].deadline; j >= 1; j--)
        {
            if (slot[j] == -1)
            {
                slot[j] = arr[i].id;
                totalProfit+=arr[i].profits;
                break;
            }
        }
    }

    for (int i = 1; i <= maxi; i++)
    {
        cout << slot[i] << ",";
    }

    cout<<"Total profit = "<<totalProfit;
}