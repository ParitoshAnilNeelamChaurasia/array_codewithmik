// https://leetcode.com/problems/number-of-zero-filled-subarrays/description/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        ll n = nums.size();

        ll res = 0;

        int i = 0;

        while (i < n)
        {
            ll count = 0;

            if (nums[i] == 0)
            {

                while (i < n && nums[i] == 0)
                {
                    count++;
                    i++;
                }
            }
            else
            {
                i++;
            }

            res += ((count) * (count + 1)) / 2;
        }
        return res;
    }
};