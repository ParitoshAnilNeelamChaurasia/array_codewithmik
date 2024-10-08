// https://leetcode.com/problems/subarray-sums-divisible-by-k/submissions/1325146007/

#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size() ;

        unordered_map<int,int> mp ;

        int sum = 0 ;
        mp[0] = 1 ;          // sum % k == 0  -> 0 % k == 0

        int count = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            sum += nums[i] ;
            int rem = sum % k ;

            if(rem < 0)
            {
                rem += k ;
            }

            if(mp.find(rem) != mp.end())
            {
                count += mp[rem] ;
            }
            mp[rem]++ ;
        }
        return count ;
    }
};