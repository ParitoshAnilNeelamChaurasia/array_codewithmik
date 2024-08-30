
// https://leetcode.com/problems/count-alternating-subarrays/description/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Solution
{
public:
    long long countAlternatingSubarrays(vector<int> &nums)
    {
        ll n = nums.size();

        ll count = 0;

        for (int i = 0; i < n; ++i)
        {
            int j = i;
            while (j + 1 < n && nums[j] != nums[j + 1])
            {
                j++;
            }
            ll len = j - i + 1;

            count += len * (len + 1) / 2;
            i = j;
        }
        return count;
    }
};