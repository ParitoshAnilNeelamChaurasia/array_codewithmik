
// https://leetcode.com/problems/arithmetic-subarrays/description/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m = l.size();
        vector<bool> ans;

        for (int i = 0; i < m; ++i) {
            int st = l[i];
            int en = r[i];

            vector<int> arr;

            for (int j = st; j <= en; ++j) {
                arr.push_back(nums[j]);
            }

            sort(arr.begin(), arr.end());

            bool isArithmetic = true;
            int d = arr[1] - arr[0];
            for (int j = 1; j < arr.size(); ++j) {
                if (arr[j] - arr[j-1] != d) {
                    isArithmetic = false;
                    break;
                }
            }
            ans.push_back(isArithmetic);
        }
        return ans;
    }
};
