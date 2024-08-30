
// https://leetcode.com/problems/sum-of-even-numbers-after-queries/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size() ;
        int m = queries.size() ;

        int sum_even = 0 ;
        for(int i = 0 ; i < n ; ++i)
        {
            if(nums[i] % 2 == 0)
            {
                sum_even += nums[i] ;
            }
        }

        vector<int> ans ;

        for(int i = 0 ; i < m ; ++i)
        {
            int val = queries[i][0] ;
            int ind = queries[i][1] ;

            if(nums[ind] % 2 == 0)
            {
                sum_even = sum_even - nums[ind] ;
            }

            nums[ind] += val ;

            if(nums[ind] % 2 == 0)
            {
                sum_even += nums[ind] ;
            }
            ans.push_back(sum_even) ;
        }
        return ans ;
    }
};

int main()
{

}