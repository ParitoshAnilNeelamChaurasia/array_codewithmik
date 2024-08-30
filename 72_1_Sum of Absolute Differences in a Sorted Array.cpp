// https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/submissions/1356009058/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size() ;

        vector<int> ans ;

        for(int i = 0 ; i < n ; ++i)
        {
            int sum = 0 ;
            for(int j = 0 ; j < n ; ++j)
            {
                sum = sum + abs(nums[i] - nums[j]) ;
            }
            ans.push_back(sum) ;
            sum = 0 ;
        }
        return ans ;
    }
};