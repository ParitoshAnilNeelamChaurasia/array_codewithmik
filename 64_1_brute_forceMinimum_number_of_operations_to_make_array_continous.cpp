// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-continuous/description/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size() ;

        int ans = INT_MAX  ;

        for(int i = 0 ; i < n ; ++i)
        {
            int mn = nums[i] ;
            int mx = mn + n -1 ;

            int oper = 0 ;

            unordered_set<int> st ;

            for(int j = 0 ; j < n ; ++j)
            {
                if(nums[j] >= mn && nums[j] <= mx && st.find(nums[j]) == st.end())
                {
                    // inserting element which is already used
                    st.insert(nums[j]) ;
                    continue ;
                }
                else
                {
                    oper++ ;
                }
            }
            ans = min(ans , oper) ;
        }
        return ans ;
    }
};

int main()
{

}