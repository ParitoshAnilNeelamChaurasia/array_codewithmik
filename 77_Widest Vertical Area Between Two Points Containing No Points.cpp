// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int m = points.size() ;
        int n = points[0].size() ;

        vector<int> ans ;

        for(int i = 0 ; i < m ; ++i)
        {
                ans.push_back(points[i][0]) ;
        }

        sort(ans.begin() , ans.end()) ;

        int mx = INT_MIN ;

        for(int i = 0 ; i < ans.size()-1 ; ++i)
        {
            mx = max(mx , ans[i+1] - ans[i]) ;
        }
        return mx ;
    }
};