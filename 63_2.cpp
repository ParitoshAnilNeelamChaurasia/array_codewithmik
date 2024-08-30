// https://leetcode.com/problems/majority-element-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int n = nums.size();

        int count1 = 0;
        int maj1;

        int count2 = 0;
        int maj2;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == maj1)
            {
                count1++;
            }
            else if (nums[i] == maj2)
            {
                count2++;
            }
            else if (count1 == 0)
            {
                maj1 = nums[i];
                count1 = 1;
            }
            else if (count2 == 0)
            {
                maj2 = nums[i];
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        vector<int> ans;
        int freq1 = 0;
        int freq2 = 0;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == maj1)
            {
                freq1++;
            }
            if (nums[i] == maj2)
            {
                freq2++;
            }
        }

        if (freq1 > n / 3)
            ans.push_back(maj1);

        if (freq2 > n / 3)
            ans.push_back(maj2);

        set<int> st;

        for (auto it : ans)
        {
            st.insert(it);
        }

        vector<int> final;
        for (auto it : st)
        {
            final.push_back(it);
        }
        return final;
    }
};

int main()
{
}