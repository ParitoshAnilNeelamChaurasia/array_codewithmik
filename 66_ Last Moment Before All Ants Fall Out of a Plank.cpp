// https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/description/

#include<bits/stdc++.h>
using namespace std ;

// consider that the passed -> don't consider that they are colliding
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans = 0 ;

        for(int &x : left)
        {
            ans = max(ans , x) ;
        }   

        for(int &x : right)
        {
            ans = max(ans , n-x) ;
        }

        return ans ;
    }
};