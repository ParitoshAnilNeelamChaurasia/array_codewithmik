// https://leetcode.com/problems/spiral-matrix-ii/submissions/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n == 0)
        {
            return {} ;
        }

        int m = n ;

        vector<vector<int>> mat(m , vector<int>(n)) ;

        int top = 0 ;
        int down = m-1 ;
        int left = 0 ;
        int right = n-1 ;

        int id = 0 ;

        int counter = 1 ;
        while(top <= down && left <= right)
        {
            // left -> right
            if(id == 0)
            {
                for(int i = left ; i <= right ; ++i)
                {
                    mat[top][i] = counter++ ;
                }
                top++ ;
            }

            // top -> bottom

            if(id == 1)
            {
                for(int i = top ; i <= down ; ++i)
                {
                    mat[i][right] = counter++ ;
                }
                right-- ;
            }

            // right -> left

            if(id == 2)
            {
                for(int i = right ; i >= left ; --i)
                {
                    mat[down][i] = counter++ ;
                }
                down-- ;
            }

            // down -> top

            if(id == 3)
            {
                for(int i = down ; i >= top ; --i)
                {
                    mat[i][left] = counter++ ;
                }
                left++ ;
            }
            id = (id+1) % 4 ;

            // OR 
            /*
            id++ ;
            if(id > 3)
            {
                id = 0 ;
            }
            */
        }
        return mat ;
    }
};

int main()
{

}