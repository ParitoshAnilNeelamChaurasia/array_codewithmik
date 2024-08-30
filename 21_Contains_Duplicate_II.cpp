// https://leetcode.com/problems/contains-duplicate-ii/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size() ;

        unordered_map<int ,int>  mp ;

        for(int i = 0 ; i < n ; ++i)
        {
            // check that the current number present in the map
            if(mp.find(nums[i]) != mp.end() && abs(mp[nums[i]] - i) <= k)
            {
                return true ;
            }

            /* 
            if the current number is either not found in the map or the 
            previous occurrence is farther than k indices away,
             we need to update the map with the current index of the number
             */
            else
            {
                mp[nums[i]] = i ;   // {number , index} -> put in map
            }
        }

        return false ;
    }
};

int main()
{

}