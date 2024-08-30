// https://leetcode.com/problems/container-with-most-water/submissions/1304663013/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size() ;

        int i = 0 ;
        int j = n-1 ;

        int mx = INT_MIN ;

        while(i < j)
        {
            int w = j- i ;
            int h = min(height[i] , height[j]) ;

            int area = w*h ;

            mx = max(mx,area) ;

            if(height[i] > height[j])
            {
                j-- ;
            }
            else
            {
                i++ ;
            }
        }

        return mx ;
    }
};

int main()
{
    
}