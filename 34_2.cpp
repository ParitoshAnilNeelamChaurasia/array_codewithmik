// O(n^2)
// https://leetcode.com/problems/subarray-sums-divisible-by-k/
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size() ;

        vector<int> cumm(n) ;

        cumm[0] = nums[0] ;
        for(int i = 1 ; i < n ; ++i)
        {
            cumm[i] = cumm[i-1] + nums[i] ;
        }

        int count = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            int sum = 0 ;
            for(int j = i ; j < n ; ++j )
            {
                if(i == 0)
                {
                    sum = cumm[j] ;
                }
                else
                {
                    sum = cumm[j] - cumm[i-1] ;
                }

                if(sum % k == 0)
                count++ ;
            }
        }
        return count ;
    }

};

int main()
{

}