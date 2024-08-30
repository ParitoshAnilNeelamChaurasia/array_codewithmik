// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/submissions/1333433511/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size() ;
        int n = grid[0].size() ;

        int count = 0 ;

        for(auto &row : grid)
        {
            int idx = upper_bound(row.begin() , row.end() , 0 , greater<int>()) - row.begin() ;

            count += n - idx ;
        }
        return count ;
    }
};

int main()
{

}