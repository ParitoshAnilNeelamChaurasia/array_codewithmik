#include<bits/stdc++.h>
using namespace std ;

#define ll long long

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        ll n = nums.size() ;

        ll count = 0 ;
            ll res = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            if(nums[i] == 0)
            {
                res++ ;
            }
            else
            {
                res = 0 ;
            }
            count += res ;
        }
        return count ;
    }
};

int main()
{
    
}