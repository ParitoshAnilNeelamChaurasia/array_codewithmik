// https://leetcode.com/problems/median-of-two-sorted-arrays/

#include<bits/stdc++.h>
using namespace std ;


class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int m = nums2.size();

        int i = 0, j = 0;

        vector<int> temp(m + n);
        int k = 0;

        while (i < n && j < m)
        {
            if (nums1[i] <= nums2[j])
            {
                temp[k++] = nums1[i++];
            }
            else
            {
                temp[k++] = nums2[j++];
            }
        }

        while (i < n)
        {
            temp[k++] = nums1[i++];
        }

        while (j < m)
        {
            temp[k++] = nums2[j++];
        }

        int sz = temp.size();

        if (sz % 2 == 1)
        {
            return temp[sz / 2];
        }

        return (temp[sz / 2] + temp[(sz / 2) - 1]) / 2.0;
    }
};
