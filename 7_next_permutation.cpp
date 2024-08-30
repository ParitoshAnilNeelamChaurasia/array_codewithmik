// https://leetcode.com/problems/next-permutation/description/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n = a.size() ;

        // first find the blue gola
        int gola_ind = -1;

        for(int i = n-1 ; i > 0 ; --i)
        {
            if(a[i] > a[i-1])
            {
                gola_ind = i - 1 ;
                break ;
            }
        }

        if(gola_ind != -1)
        {
        int swap_ind= -1 ;

        for(int i = n-1 ; i >= gola_ind + 1 ; --i)
        {
            if(a[i] > a[gola_ind])
            {
                swap_ind = i ;
                break ;
            }
        }

        swap(a[gola_ind] , a[swap_ind]) ;

        }
        reverse(a.begin() + gola_ind + 1 , a.end()) ;

    }
};

int main()
{
    
}