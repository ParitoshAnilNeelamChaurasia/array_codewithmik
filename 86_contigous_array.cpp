// https://leetcode.com/problems/contiguous-array/description/

#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size() ;

        unordered_map<int,int> mp ;

        int curr_sum = 0 ;
        mp[0] = -1 ;

        int res = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            if(nums[i] == 1)
            {
                curr_sum += 1 ;
            }
            else
            {
                curr_sum = curr_sum - 1 ;
            }

            if(mp.find(curr_sum) != mp.end())
            {
                res = max(res , i - mp[curr_sum]) ;
            }
            else
            {
                mp[curr_sum] = i ;
            }
        }
        return res ;

    }
};