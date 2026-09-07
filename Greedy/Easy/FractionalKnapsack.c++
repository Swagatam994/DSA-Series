#include <bits/stdc++.h>
using namespace std;
struct item
{

    int price;
    int weight;
};
bool cmp(item a, item b)
{
    double r1 = (double)a.price / a.weight;
    double r2 = (double)b.price / b.weight;
    return r1 > r2;
}
int main()
{
    int n = 3, wt = 50;
    double profit = 0;
    item arr[n] = {{100, 20}, {60, 10}, {120, 30}};
    sort(arr, arr + n, cmp);
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= wt)
        {
            wt -= arr[i].weight;
            profit += arr[i].price;
        }

        else
        {

            profit += (arr[i].price * (double)wt / arr[i].weight);
            break;
        }
    }
    cout << profit;
}