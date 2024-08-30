// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size() ;

        sort(nums.begin() , nums.end()) ;

        vector<int> ans ;

        for(int i = 0 ; i < n-1 ; ++i)
        {
            if(nums[i] == nums[i+1])
            ans.push_back(nums[i]) ;
        }

        set<int> st ;
        for(auto it : ans)
        {
            st.insert(it) ;
        }

        vector<int> fin ;
        for(auto it : st)
        {
            fin.push_back(it) ;
        }

        return fin ;
    }
};