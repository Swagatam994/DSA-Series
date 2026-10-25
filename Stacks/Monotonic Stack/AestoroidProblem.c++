#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> aestoroid = {3, 5, -6, 2, -1, 4};
    vector<int> res;
    list<int> st;

    for (int i = 0; i < aestoroid.size(); i++)
    {
        if (aestoroid[i] > 0)
            st.push_back(aestoroid[i]);

        else
        {
            while (!st.empty() && st.back() > 0 && st.back() < abs(aestoroid[i]))
                st.pop_back();

            if (!st.empty() && st.back() == abs(aestoroid[i]))
                st.pop_back();

            else if (st.empty() || st.back() < 0)
            {
                st.push_back(aestoroid[i]);
            }
        }
    }

    for (int v : st)
    {
        res.push_back(v);
    }

    for (int v : res)
        cout << v;
}