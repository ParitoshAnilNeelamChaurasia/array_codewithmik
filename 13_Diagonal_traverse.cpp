// https://leetcode.com/problems/diagonal-traverse/submissions/1304767971/

#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size() ;    // row
        int n = mat[0].size() ; // col


        map<int,vector<int>> mp ;

        vector<int> ans ;

        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                mp[i+j].push_back(mat[i][j]) ;
            }
        }
        bool flag = true ;

        for(auto &it : mp)
        {
            if(flag == true)
            {
                reverse(it.second.begin() , it.second.end()) ;
            }

            for(auto &it : it.second)
            {
                ans.push_back(it) ;
            }
            flag = !flag ;
        }
        return ans ;
    }
};


int main()
{

}