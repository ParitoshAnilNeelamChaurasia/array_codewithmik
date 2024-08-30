// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-continuous/submissions/1347726454/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int n = nums.size();

        set<int> st(nums.begin(), nums.end());

        vector<int> ans(st.begin(), st.end());

        int mn_ele = INT_MAX;

        for (int i = 0; i < ans.size(); ++i)
        {
            int mn = ans[i];
            int mx = mn + n - 1;

            // for getting element just greater than current element
            int j = upper_bound(ans.begin(), ans.end(), mx) - ans.begin();

            int within_range = j - i;
            int out_of_range = n - (j - i);

            mn_ele = min(mn_ele, out_of_range);
        }
        return mn_ele;
    }
};

int main()
{
}