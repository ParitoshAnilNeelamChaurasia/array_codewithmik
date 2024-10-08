
// https://leetcode.com/problems/sequential-digits/


#include<bits/stdc++.h>
using namespace std ;

// O(1) approach
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans = {
            12,23,34,45,56,67,78,89,
            123,234,345,456,567,678,789,
            1234,2345,3456,4567,5678,6789,
            12345,23456,34567,45678,56789,
            123456,234567,345678,456789,
            1234567,2345678,3456789,
            12345678,23456789,
            123456789
        } ;

        vector<int> all ;
        for(int i = 0 ; i < ans.size() ; ++i)
        {
            if(ans[i] >= low && ans[i] <= high)
            {
                all.push_back(ans[i]) ;
            }
            else
            continue ;
        }
        return all ;
    }
};

// O(n) approach

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> q ;

        for(int i = 1 ; i <= 8 ; ++i)
        {
            q.push(i) ;
        }

        vector<int> ans ;

        while(!q.empty())
        {
            int temp = q.front() ;
            q.pop() ;

            if(temp >= low && temp <= high)
            {
                ans.push_back(temp) ;
            }

            int last_digit = temp % 10 ;
            if(last_digit + 1 <= 9)
            {
                q.push(temp * 10 + (last_digit+1)) ;
            }
        }
        return ans ;
    }
};