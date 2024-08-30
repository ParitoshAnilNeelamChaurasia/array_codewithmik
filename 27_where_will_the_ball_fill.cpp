#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findBall(vector<vector<int>> &grid)
    {
        int m = grid.size();

        int n = grid[0].size();

        vector<int> ans;

        for (int ball = 0; ball < n; ++ball)
        {
            int row = 0;
            int col = ball;

            bool flag = false;

            while (row < m && col < n)
            {
                if (grid[row][col] == 1)
                {
                    if (col == n - 1 || grid[row][col + 1] == -1)
                    {
                        flag = true;
                        break;
                    }
                    col++;
                }
                // grid[row][col] == -1
                else if (grid[row][col] == -1)
                {
                    if (col == 0 || grid[row][col - 1] == 1)
                    {
                        flag = true;
                        break;
                    }
                    col--;
                }
                row++;
            }

            if (flag == true)
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(col);
            }
        }
        return ans;
    }
};

int main()
{
}