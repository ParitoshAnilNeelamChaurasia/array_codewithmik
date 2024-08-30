#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int m = intervals.size() ;

        sort(intervals.begin() , intervals.end()) ;

        int i = 0 , j = 1 ;

        int count = 0 ;

        while(j < m)
        {
            vector<int> curr_int = intervals[i] ;
            vector<int> next_int = intervals[j] ;

            int first_curr_int = curr_int[0] ;
            int second_curr_int = curr_int[1] ;

            int first_next_int = next_int[0] ;
            int second_next_int = next_int[1] ;

            // non overlapping
            if(second_curr_int <= first_next_int)
            {
                i = j ;
                j++ ;
            }

            // overlapping cases
            else if(second_curr_int <= second_next_int)
            {
                j++ ;
                count++ ;
            }

            else if(second_curr_int > second_next_int)
            {
                i = j;
                j++ ;
                count++ ;
            }
        }
        return count ;
    }
};

