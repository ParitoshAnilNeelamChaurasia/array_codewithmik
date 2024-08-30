// https://leetcode.com/problems/number-of-enclaves/submissions/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:

    void dfs(int r , int c , vector<vector<int>> &grid , int m , int n)
    {
        if(r >= m || r < 0 || c >= n || c < 0 || grid[r][c] == 0)
        {
            return ;
        }
        // mark it visited
        grid[r][c] = 0 ;

        dfs(r+1 , c , grid , m , n) ;
        dfs(r-1 , c , grid , m , n) ;
        dfs(r , c+1 , grid , m , n) ;
        dfs(r , c-1 , grid , m , n) ;
    }
// make dfs from cell which is out of bound


    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size() ;
        int n = grid[0].size() ;


        for(int i = 0 ; i < m ; ++i)
        {
            // ist col
            if(grid[i][0] == 1)
            {
                dfs(i,0 , grid , m , n) ;
            }

            // last col

            if(grid[i][n-1] == 1)
            {
                dfs(i , n-1 , grid , m , n) ;
            }
        }

        for(int j = 0 ; j < n ; ++j)
        {
            if(grid[0][j] == 1)
            {
                dfs(0,j,grid , m , n) ;
            }

            if(grid[m-1][j] == 1)
            {
                dfs(m-1 , j , grid , m , n) ;
            }
        }

        int count = 0 ;

        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                if(grid[i][j] == 1)
                {
                    count++ ;
                }
            }
        }
        return count ;


    }
};

int main()
{

}