// https://leetcode.com/problems/shortest-path-in-a-grid-with-obstacles-elimination/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:

    vector<vector<int>> directions = {{1,0} , {-1,0} , {0,1} , {0,-1}} ;
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size() ;
        int n = grid[0].size() ;

        int steps = 0 ;

        queue<vector<int>> q ;
        int i = 0 ;
        int j = 0 ;

        q.push({0 , 0 , k}) ;  // start

        bool visited[41][41][1601] ;

        for(int i = 0 ; i < 41 ; ++i)
        {
            for(int j = 0 ; j < 41 ; ++j)
            {
                for(int a = 0 ; a < 1601 ; ++a)
                {
                    visited[i][j][a] = false ;
                }
            }
        }

        // memset(visited , false , sizeof(visited)) ;

        while(!q.empty())
        {
            int size = q.size() ;

            while(size--)
            {
                vector<int> temp = q.front() ;
                q.pop() ;

                int curr_i = temp[0] ;
                int curr_j = temp[1] ;
                int obstacle = temp[2] ;

                if(curr_i == m-1 && curr_j == n-1)
                {
                    return steps ;
                }

                for(vector<int> &dir : directions)
                {
                    int new_i = curr_i + dir[0] ;
                    int new_j = curr_j + dir[1] ;

                    if(new_i < 0 || new_j >= n || new_i >= m || new_j < 0)
                    {
                        continue ;
                    }

                    if(grid[new_i][new_j] == 0 && !visited[new_i][new_j][obstacle])
                    {
                        q.push({new_i , new_j , obstacle}) ;

                        visited[new_i][new_j][obstacle] = true ;
                    }

                    else if(grid[new_i][new_j] == 1 && obstacle > 0 && !visited[new_i][new_j][obstacle-1])
                    {
                        q.push({new_i , new_j , obstacle-1}) ;
                        visited[new_i][new_j][obstacle-1] = true ;
                    }
                }
            }
            steps++ ;
        }

        return -1 ;


    }
};

int main()
{

}