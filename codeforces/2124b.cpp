#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for (cin >> t; t > 0; t--)
    {
        int n;
        cin >> n;

        vector<int> input;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            input.push_back(a);
        }

        vector<int> minimums;

        int lowest = input[0];
        cout << lowest << endl;
        for (auto num : input)
        {
            if (num < lowest)
            {
                lowest = num;
            }
            minimums.push_back(lowest);
        }

        int sum_left = minimums[0];
        int sum_right = minimums[minimums.size() - 1];
        int pointer_left = 1;
        int pointer_right = minimums.size() - 2;

        while (pointer_left < pointer_right)
        {
            if (sum_left > sum_right)
            {
                sum_right += minimums[pointer_right--];
            }
            else if (sum_left < sum_right)
            {
                sum_left += minimums[pointer_left++];
            }
        }

        cout << "PL: " << pointer_left << " PR: " << pointer_right << endl;
    }
}