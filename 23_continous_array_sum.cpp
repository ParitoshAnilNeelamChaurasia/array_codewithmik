// https://leetcode.com/problems/continuous-subarray-sum/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();

        unordered_map<int, int> mp;

        mp[0] = -1;

        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            sum += nums[i];

            int rem = sum % k;

            // did we see the element in the past
            if (mp.find(rem) != mp.end())
            {
                // if yes -> size >= 2
                if (i - mp[rem] >= 2)
                {
                    return true;
                }
            }
            // if rem -> not seen in past -> put it inside the map
            else
            {
                mp[rem] = i;
            }
        }
        return false;
    }
};

int main()
{
}