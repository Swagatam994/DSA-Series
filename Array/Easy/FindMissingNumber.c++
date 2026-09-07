#include <bits/stdc++.h>
using namespace std;

void sumOfnumbers(vector<int> arr)
{
    int n = arr.size() + 1;
    int sum = (n * (n + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum2 += arr[i];
    }

    cout << "The missing number is " << sum - sum2;
}

void useXOR(vector<int> arr)
{
    int xor1 = 0, xor2 = 0;
    for (int i = 1; i <= arr.size() + 1; i++)
    {
        xor1 ^= i; // xor of all numbers
    }
    for (int i = 0; i < arr.size(); i++)
    {
        xor2 ^= arr[i];
    }

    cout << "\nThe missing element is " << (xor1 ^ xor2);
}

int main()
{
    vector<int> arr = {1, 2, 3, 5, 4, 7};
    // approach 1
    sumOfnumbers(arr);

    //  approach 2

    useXOR(arr);
}