// https://leetcode.com/problems/largest-perimeter-triangle/submissions/1305752004/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size() ;

        sort(nums.begin() , nums.end()) ;

        int ans = 0 ;

        for(int i = n-1 ; i >= 2 ; --i)
        {
            if(nums[i] < nums[i-1] + nums[i-2])
            {
            ans = nums[i] + nums[i-1] + nums[i-2] ;
            break ;
            }

        }

        return ans ;
    }
};

int main()
{

}