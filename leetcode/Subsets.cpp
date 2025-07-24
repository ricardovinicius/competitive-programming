#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

class Solution
{

    void search(int k, vector<int> &ss, vector<int> &nums, set<vector<int>> &sol)
    {
        if (k == nums.size())
        {
            sol.insert(ss);
        }
        else
        {
            search(k + 1, ss, nums, sol);
            ss.push_back(nums[k]);
            search(k + 1, ss, nums, sol);
            ss.pop_back();
        }
    }

public:
    set<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> ss;
        set<vector<int>> sol;
        search(0, ss, nums, sol);

        return sol;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = {1, 2, 2};

    auto ans = Solution().subsets(v);

    for (auto a : ans)
    {
        cout << "[";
        for (auto b : a)
        {
            cout << b << ",";
        }
        cout << "]" << endl;
    }
}