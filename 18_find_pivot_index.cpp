#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        // Calculate the total sum of the array
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }

        // Create the prefix sum array
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            pref[i + 1] = pref[i] + nums[i];
        }

        // Iterate through the array to find the pivot index
        for (int i = 0; i < n; ++i) {
            int left_sum = pref[i];
            int right_sum = sum - pref[i + 1];
            if (left_sum == right_sum) {
                return i;
            }
        }

        // If no pivot index is found, return -1
        return -1;
    }
};


int main()
{

}