// https://leetcode.com/problems/minimum-average-difference/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
    int min_avg_diff = INT_MAX;
    int min_index = -1;

    for (int i = 0; i < n; ++i) {
        long long left_sum = 0;
        long long right_sum = 0;

        for (int j = 0; j <= i; ++j) {
            left_sum += nums[j];
        }

        for (int j = i + 1; j < n; ++j) {
            right_sum += nums[j];
        }

        int left_avg = left_sum / (i + 1);
        int right_avg = (i != n - 1) ? right_sum / (n - i - 1) : 0;
        int avg_diff = abs(left_avg - right_avg);

        if (avg_diff < min_avg_diff) {
            min_avg_diff = avg_diff;
            min_index = i;
        }
    }

    return min_index;
    }
};

int main()
{

}