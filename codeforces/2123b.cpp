#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for (cin >> t; t > 0; t--)
    {
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> numbers;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            numbers.push_back(num);
        }

        int j_strength = numbers[j + 1];

        set<int> numbers_strength = set(numbers.begin(), numbers.end());

        int pos = 0;

        for (auto num : numbers_strength)
        {
            if (num == j_strength)
            {
                break;
            }
            pos++;
        }

        if (numbers_strength.size() - pos <= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
