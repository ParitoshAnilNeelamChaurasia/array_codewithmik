// https://leetcode.com/problems/island-perimeter/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    void dfs(int i , int j , vector<vector<int>> &grid , int m , int n , int &peri)
    {
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0)
        {
            peri++ ;
            return ;
        }

        if(grid[i][j] == -1)
        {
            return ;
        }
        grid[i][j] = -1 ;

        dfs(i , j+1 , grid , m , n , peri) ;
        dfs(i , j-1 , grid , m , n , peri) ;
        dfs(i+1 , j , grid , m , n , peri) ;
        dfs(i-1 , j , grid , m , n , peri) ;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size() ;
        int n = grid[0].size() ;

        int peri = 0 ;
        for(int i = 0 ; i< m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                if(grid[i][j] == 1)
                {
                    dfs(i , j , grid , m , n , peri) ;
                    return peri ;
                }
            }
        }
        return -1 ;
    }
};