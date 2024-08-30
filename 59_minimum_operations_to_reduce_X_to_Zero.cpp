

// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/
// longest subarray whose sum = (sum-x)

#include<bits/stdc++.h>
using namespace std ;

class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int n = nums.size();

        unordered_map<int, int> mp;

        int sum = 0;

        mp[0] = -1;

        for (int i = 0; i < n; ++i)
        {
            sum += nums[i];
            mp[sum] = i;
        }

        int remaining_sum = sum - x;

        if (remaining_sum < 0)
            return -1;

        int longest_subarray = INT_MIN;

        sum = 0;

        for (int i = 0; i < n; ++i)
        {
            sum += nums[i];

            int find_sum = sum - remaining_sum;

            if (mp.find(find_sum) != mp.end())
            {
                int ind = mp[find_sum];

                longest_subarray = max(longest_subarray, i - ind);
            }
        }

        if (longest_subarray == INT_MIN)
            return -1;

        return n - longest_subarray;
    }
};