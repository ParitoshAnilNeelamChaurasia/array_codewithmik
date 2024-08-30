// https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/description/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size() ;

        sort(nums.begin() , nums.end()) ;

        int count = 0 ;
        for(int i = n-1 ; i >= 1 ; --i)
        {
            if(nums[i] == nums[i-1])
            continue ;

            // we have to convert n-i elements
            else
            count += (n-i) ;
        }
        return count ;
    }
};

