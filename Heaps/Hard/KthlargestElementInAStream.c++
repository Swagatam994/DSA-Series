#include <bits/stdc++.h>
using namespace std;

    priority_queue<int, vector<int>, greater<int>> pq;
    int k;


   void KthLargest (vector<int>& stream) // initialising the heap with initial elements
    {

        for (int i = 0; i < stream.size(); i++)
        {
            pq.push(stream[i]);

            if (pq.size() > k)
                pq.pop();
        }
    }

    int add(int n)
    {
        pq.push(n);

        if (pq.size() > k)
            pq.pop();

        return pq.top();
    }
    int main()
    {
        vector<int> nums = {4, 5, 8, 2};
        k=3;
       KthLargest(nums);
      
    cout << add(3) << endl;  // Output: 4
    cout << add(5) << endl;  // Output: 5
    cout << add(10) << endl; // Output: 5
    cout << add(9) << endl;  // Output: 8
    cout << add(4) << endl;  // Output: 8
    }
