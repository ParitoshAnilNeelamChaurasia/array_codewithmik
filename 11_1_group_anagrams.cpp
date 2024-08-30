// https://leetcode.com/problems/group-anagrams/submissions/1304701326/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        int n = s.size() ;

        vector<vector<string>> ans ;

        unordered_map<string , vector<string>> mp ;

        for(int i = 0 ; i < n ; ++i)
        {
            string temp = s[i] ;

            sort(temp.begin() , temp.end()) ;

            mp[temp].push_back(s[i]) ;
        }

        for(auto it : mp)
        {
            ans.push_back(it.second) ;
        }

        return ans ;
    }
};

int main()
{

}