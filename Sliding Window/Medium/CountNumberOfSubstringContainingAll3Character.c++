#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "bbacba";
    int r = 0, l = 0, count = 0;
    vector<int> freq(3, 0);

    while (r < s.length())
    {
        freq[s[r] - 'a']++;

        while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0)
        {
            count += (s.length() - r);
            freq[s[l] - 'a']--;
            l++;
        }
        r++;
    }
    cout << count;
}