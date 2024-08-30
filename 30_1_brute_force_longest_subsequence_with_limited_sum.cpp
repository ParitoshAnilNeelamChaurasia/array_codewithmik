// https://leetcode.com/problems/longest-subsequence-with-limited-sum/submissions/1308811089/

// BRUTE FORCE
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size() ;
        int m = queries.size() ;

        sort(nums.begin() , nums.end()) ;

        vector<int> ans(m) ;

        for(int i = 0 ; i < m ; ++i)
        {
            int x = queries[i] ;
            int sum = 0 ;
            for(int j = 0 ; j < n ; ++j)
            {
                sum += nums[j] ;

                if(sum > x)
                {
                    ans[i] = j ;
                    break ;
                }

                if(j == n-1)
                {
                    ans[i] = n  ;
                }
            }
        }
        return ans ;
    }
};

int main()
{
    
}