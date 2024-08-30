#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();

        sort(nums.begin(), nums.end());

        vector<int> cum(n + 1, 0); // Corrected: Initialize cum with size n+1 and starting with 0

        for (int i = 1; i <= n; ++i) {
            cum[i] = cum[i - 1] + nums[i - 1]; // Corrected: Proper cumulative sum calculation
        }

        vector<int> ans(m); // Corrected: Initialize ans with size m

        for (int i = 0; i < m; ++i) {
            int sum = queries[i];
            int left = 0;
            int right = n;


            if(sum >= cum[cum.size()-1])
            {
                ans[i] = cum.size()-1 ;
            }

            else
            {

            while (left < right) {
                int mid = left + (right - left) / 2;
                if (cum[mid] <= sum) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }

            ans[i] = left -1 ; // Corrected: Store result directly in ans[i]
            }
        }

        return ans;
    }
};


int main()
{
    
}