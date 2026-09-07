#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0}, k = 3;
    int n = 11, l = 0, r = 0, zeroes = 0, len, maxlen = 0;

    while (r < n)
    {
        if (arr[r] == 0)
            zeroes++;

       

        while (zeroes >k)
        {
            if (arr[l] == 0)
                zeroes--;
            l++;
        }
         maxlen = max(maxlen, r - l + 1);
        r++;
    }
    cout << maxlen;
}