// https://leetcode.com/problems/sum-of-even-numbers-after-queries/submissions/1305247835/

// Brute force approach

// O(N∗M)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
    {
        vector<int> answer;

        for (const auto &query : queries)
        {
            int val = query[0];
            int index = query[1];

            // Apply the query
            nums[index] += val;

            // Calculate the sum of even numbers
            int even_sum = 0;
            for (const int num : nums)
            {
                if (num % 2 == 0)
                {
                    even_sum += num;
                }
            }

            // Append the result to the answer array
            answer.push_back(even_sum);
        }

        return answer;
    }
};

int main()
{
}