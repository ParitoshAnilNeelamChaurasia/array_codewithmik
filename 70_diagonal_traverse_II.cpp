// https://leetcode.com/problems/diagonal-traverse-ii/submissions/1354765269/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int,vector<int>> mp ;

        for(int row = nums.size()-1 ; row >= 0 ; --row)
        {
            for(int col = 0 ; col < nums[row].size() ; ++col)
            {
                int diag = row + col ;

                mp[diag].push_back(nums[row][col]) ;
            }
        }

        vector<int> res ;

        int diagonal = 0 ;

        while(mp.find(diagonal) != mp.end())
        {
            for(int &num : mp[diagonal])
            {
                res.push_back(num) ;
            }
            diagonal++ ;
        }
        return res ;
    }
};