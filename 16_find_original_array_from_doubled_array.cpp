#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findOriginalArray(vector<int> &a)
    {
        int n = a.size();
        // odd size
        if (n % 2 == 1)
        {
            return {};
        }
        else
        {
            sort(a.begin(), a.end());

            map<int, int> mp;
            for (auto it : a)
            {
                mp[it]++;
            }

            vector<int> ans;
            // iterate in each number

            for (int i = 0; i < n; ++i)
            {
                int twice = 2 * a[i];

                if (mp[a[i]] == 0)
                {
                    continue;
                }

                if (mp.find(twice) == mp.end() || mp[twice] == 0)
                {
                    return {};
                }
                ans.push_back(a[i]);

                mp[a[i]]--;
                mp[twice]--;
            }
            return ans;
        }
    }
};

int main()
{
}