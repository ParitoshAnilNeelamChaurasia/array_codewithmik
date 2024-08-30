// https://leetcode.com/problems/number-of-closed-islands/submissions/1327131808/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int m , n ;

    bool dfs(vector<vector<int>>& grid , int i , int j)
    {
        if(i >= m || j >= n || i < 0 || j < 0)
        {
            return false ;
        }

        if(grid[i][j] == 1)
        {
            return true ;
        }

        grid[i][j] = 1 ;

        bool left = dfs(grid , i-1 , j) ;
        bool right = dfs(grid , i+1 , j) ;
        bool up = dfs(grid , i , j+1) ;
        bool down = dfs(grid , i , j-1) ;

        return left && right && up && down ;
    }
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size() ;
        n = grid[0].size() ;

        int count = 0 ;
        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
            {
                if(grid[i][j] == 0)
                {
                    if(dfs(grid , i , j) == true) 
                    {
                        count++ ;
                    }
                }
            }
        }
        return count ;
    }
};

int main()
{

}