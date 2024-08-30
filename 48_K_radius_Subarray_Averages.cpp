// https://leetcode.com/problems/k-radius-subarray-averages/ 

#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {
        int n = nums.size();

        vector<int> ans(n, -1);

        if (k == 0)
        {
            return nums;
        }

        else if (n < 2 * k + 1)
        {
            return ans;
        }

        vector<ll> pref(n);
        pref[0] = nums[0];

        for (int i = 1; i < n; ++i)
        {
            pref[i] = pref[i - 1] + nums[i];
        }

        for (int i = k; i < n - k; ++i)
        {
            int left_ind = i - k;
            int right_ind = i + k;

            ll sum = pref[right_ind];

            if (left_ind > 0)
            {
                sum -= pref[left_ind - 1];
            }

            int avg = sum / (2 * k + 1);

            ans[i] = avg;
        }

        return ans;
    }
};

int main()
{
}