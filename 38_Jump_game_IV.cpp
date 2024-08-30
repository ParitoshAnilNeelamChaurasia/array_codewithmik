// https://leetcode.com/problems/jump-game-iv/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size() ;

        unordered_map<int,vector<int>> mp ;
        vector<bool>visited(n,false) ;

        for(int i = 0 ; i < n ; ++i)
        {
            mp[arr[i]].push_back(i) ;
        }

        queue<int> q ;
        q.push(0) ;
        visited[0]=true ;

        int steps = 0 ;

        while(!q.empty())
        {
            int size = q.size() ;

            while(size--)
            {
                int curr = q.front() ;
                q.pop() ;

                int left = curr-1 ;
                int right = curr + 1 ;

                if(curr == n-1)
                {
                    return steps ;
                }

                if(left >= 0 && visited[left] == false)
                {
                    q.push(left) ;
                    visited[left] = true ;
                }

                if(right <= n-1 && visited[right] == false)
                {
                    q.push(right) ;
                    visited[right] = true ;
                }

                for(int &ind : mp[arr[curr]])
                {
                    if(!visited[ind])
                    {
                        q.push(ind) ;
                        visited[ind] = true ;
                    }
                }

                // as we have put indices of current number where it requires
                mp.erase(arr[curr]) ;
            }
            steps++ ;
        }
        return -1 ;
    }
};