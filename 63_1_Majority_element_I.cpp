// https://leetcode.com/problems/majority-element/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() ;

        int count = 0 ;
        int ele ;

        for(int i = 0 ; i < n ; ++i)
        {
            if(count == 0)
            {
                ele = nums[i] ;
                count++;
            }
            else if(nums[i] == ele)
            {
                count++ ;
            }
            else
            {
                count-- ;
            }
        }

        int x = 0 ;
        for(int i = 0 ; i < n ; ++i)
        {
            if(nums[i] == ele)
            {
                x++ ;
            }
        }
        if(x > n/2)
        return ele ;

        return -1 ;
    }
};

int main()
{

}