// https://leetcode.com/problems/image-smoother/description/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> dir{
        {-1,-1} , {-1,0} , {-1,1},
        {0,1} , {1,1} , {1,0} ,
        {1,-1} , {0,-1} , {0,0}
    } ;
    
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size() ;
        int n = img[0].size() ;

        vector<vector<int>> res(m , vector<int>(n,0)) ;

        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                int sum = 0 ;
                int count = 0 ;

                for(auto &it : dir)
                {
                    int x = i + it[0] ;
                    int y = j + it[1] ;

                    if(x >= 0 && x < m && y >= 0 && y < n)
                    {
                        sum += img[x][y] ;
                        count++ ;
                    }
                }
                res[i][j] = sum/count ;
            }
        }
        return res ;
    }
};