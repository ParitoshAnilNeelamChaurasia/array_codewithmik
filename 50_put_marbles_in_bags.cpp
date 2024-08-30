// https://leetcode.com/problems/put-marbles-in-bags/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        
        vector<long long> ans;
        
        for(int i = 0; i < n - 1; ++i) {
            long long sum = weights[i] + weights[i + 1];
            ans.push_back(sum);
        }

        sort(ans.begin(), ans.end());

        long long min_sum = 0;
        long long max_sum = 0;

        for(int i = 0; i < k - 1; ++i) {
            min_sum += ans[i];
            max_sum += ans[ans.size() - i - 1];
        }

        return max_sum - min_sum;
    }
};

int main()
{

}