#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumAverageDifference(vector<int> &nums)
    {
        int n = nums.size();
        vector<long long> pref(n), suff(n);

        // Calculate prefix sums
        pref[0] = nums[0];
        for (int i = 1; i < n; ++i)
        {
            pref[i] = pref[i - 1] + nums[i];
        }

        // Calculate suffix sums
        suff[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i)
        {
            suff[i] = suff[i + 1] + nums[i];
        }

        int ind = -1;
        int mn = INT_MAX;

        // Find the index with the minimum average difference
        for (int i = 0; i < n; ++i)
        {
            long long left_avg = pref[i] / (i + 1);
            long long right_avg = (i != n - 1) ? (suff[i + 1] / (n - i - 1)) : 0;
            int sum = abs(left_avg - right_avg);

            if (sum < mn)
            {
                mn = sum;
                ind = i;
            }
        }

        return ind;
    }
};

int main()
{
}