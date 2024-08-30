#include<bits/stdc++.h>
using namespace std ;


// brute force
class Solution
{
public:
    int kadanes(vector<int> &nums)
    {
        int maxSum = nums[0];
        int curSum = 0;

        for (int i = 0 ; i < nums.size() ; ++i)
        {
            curSum = max(curSum, 0);
            curSum += nums[i];
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }

    void rotate(vector<int> &nums, int n)
    {
        int last_ele = nums[n - 1];

        for (int i = n - 1; i > 0; --i)
        {
            nums[i] = nums[i - 1];
        }
        nums[0] = last_ele;
    }
    int maxSubarraySumCircular(vector<int> &nums)
    {
        int n = nums.size();

        int mx = INT_MIN;

        int i = n ;

        while(i > 0)
        {

        mx = max(mx,kadanes(nums)) ;

        rotate(nums, n);

        mx = max(kadanes(nums), mx);
        i-- ;
        }

        return mx;
    }
};