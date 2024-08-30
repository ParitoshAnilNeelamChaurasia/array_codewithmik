
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void multiply(vector<int> &ans, int &size, int multiplier)
    {
        int carry = 0;

        for (int i = 0; i < size; ++i)
        {
            int res = multiplier * ans[i];

            res = res + carry;

            ans[i] = res % 10;

            carry = res / 10;
        }

        // if carry left after completing for loop
        while (carry > 0)
        {
            ans[size] = carry % 10;

            // increase the size of vector
            size++;

            carry = carry / 10;
        }
    }
    vector<int> factorial(int N)
    {
        // code here

        vector<int> ans(10000, 0);

        ans[0] = 1;

        int size = 1;

        for (int i = 2; i <= N; ++i)
        {
            multiply(ans, size, i);
        }

        vector<int> result;

        for (int i = size - 1; i >= 0; --i)
        {
            result.push_back(ans[i]);
        }

        return result;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i)
        {
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
}
