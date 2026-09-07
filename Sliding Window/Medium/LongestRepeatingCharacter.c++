#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "AABABBA";
    int k = 1, r = 0, l = 0, maxfreq = 0, maxlen = 0;
     int hashmp[26];
     for (int i = 0; i < 25; i++)
     {
        hashmp[i]=0;
     }
     

    while (r < s.size())
    {
        hashmp[s[r] - 'A']++;
        maxfreq = max(maxfreq, hashmp[s[l] - 'A']);

        if (r - l + 1 - maxfreq > k)
        {
            hashmp[s[l] - 'A']--;
            maxfreq = 0;
            l++;
        }

        if (r - l + 1 - maxfreq <= k)
            maxlen = max(r - l + 1, maxlen);
        r++;
    }

    cout << maxlen;
}