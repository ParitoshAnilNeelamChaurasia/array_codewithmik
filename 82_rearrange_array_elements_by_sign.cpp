// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size() ;

        vector<int> pos , neg ;

        for(int i = 0 ; i < n ; ++i)
        {
            if(nums[i] < 0)
            neg.push_back(nums[i]) ;

            else
            pos.push_back(nums[i]) ;
        }

        int i = 0 ; int j = 0 ;

        vector<int> ans ;

        while(i < pos.size() && j < neg.size())
        {
            ans.push_back(pos[i]) ;
            i++ ;

            ans.push_back(neg[j]) ;
            j++ ;
        }

        return ans ;
    }
};