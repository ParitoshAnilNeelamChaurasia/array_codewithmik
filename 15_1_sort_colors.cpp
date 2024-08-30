#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();

        int zero = 0;
        int one = 0;
        int two = 0;

        // Count the number of 0s, 1s, and 2s
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == 0)
            {
                zero++;
            }
            else if (nums[i] == 1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }

        // Modify the original array with the sorted elements
        int index = 0;
        for (int i = 0; i < zero; ++i)
        {
            nums[index++] = 0;
        }
        for (int i = 0; i < one; ++i)
        {
            nums[index++] = 1;
        }
        for (int i = 0; i < two; ++i)
        {
            nums[index++] = 2;
        }
    }
};

int main()
{
}