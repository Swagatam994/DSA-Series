#include <bits/stdc++.h>
using namespace std;
void maxheap(vector<int> &nums, int n, int i)
{

    int left = i * 2 + 1;
    int right = i * 2 + 2;
    int largest = i;

    if (left < n && nums[i] < nums[left])
        largest = left;

    if (right < n && nums[i] < nums[right])
        largest = right;

    if (largest != i)
    {
        swap(nums[i], nums[largest]);

        maxheap(nums, n, largest);
    }
}

void convert(vector<int> &nums)
{
    int n = nums.size();
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        maxheap(nums, n, i);
    }
}
int main()
{
    vector<int> nums = {10, 20, 30, 21, 23};
    convert(nums);
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << ",";
    }
}