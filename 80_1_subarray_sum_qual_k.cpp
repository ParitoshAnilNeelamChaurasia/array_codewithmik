// https://leetcode.com/problems/subarray-sum-equals-k/description/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        
        // Loop over each possible starting point of the subarray
        for (int i = 0; i < n; ++i) {
            int sum = 0;
            
            // Calculate the sum of subarrays starting from index i
            for (int j = i; j < n; ++j) {
                sum += nums[j];
                
                // If the sum is equal to k, increment the count
                if (sum == k) {
                    count++;
                }
            }
        }
        
        return count;
    }
};