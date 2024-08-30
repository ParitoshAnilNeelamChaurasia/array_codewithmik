// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/submissions/1309187794/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        int n = points.size();

        sort(points.begin(), points.end());

        vector<int> prev = points[0];

        int count = 1;

        for (int i = 1; i < n; ++i)
        {
            int curr_st = points[i][0];
            int cuur_en = points[i][1];

            int prev_st = prev[0];
            int prev_en = prev[1];

            if (curr_st > prev_en)
            {
                // must have overlapp
                count++;
                prev = points[i];
            }
            else
            {
                // overlapping intervals
                prev[0] = max(prev_st, curr_st);
                prev[1] = min(prev_en, cuur_en);
            }
        }
        return count;
    }
};

int main()
{
}