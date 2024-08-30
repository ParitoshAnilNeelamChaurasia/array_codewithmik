// https://leetcode.com/problems/rotate-image/submissions/1304654581/

#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size() ;
        int n = m ;

        for(int i = 0 ; i < m ; ++i)
        {
            for(int j = i ; j < n ; ++j)
            {
                swap(matrix[i][j] , matrix[j][i]) ;
            }
        }
// reversing rows
        for(int i = 0 ; i < n ; ++i)
        {
            reverse(matrix[i].begin() , matrix[i].end()) ;
        }

    }
};

int main()
{
    
}