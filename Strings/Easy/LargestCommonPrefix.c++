#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> str = {"flower", "flow", "flight"};

    sort(str.begin(), str.end());
    string first = str[0], last = str[str.size() - 1];
    int minelement = min(first.length(), last.length());
    int indx = 0;
    for (int i = 0; i < minelement; i++)
    {
        if (first[i] == last[i])
            indx++;

        else
            break;
    }
    cout<<first.substr(0,indx);
}