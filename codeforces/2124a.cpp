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

        vector<int> sorted_input = input;
        sort(sorted_input.begin(), sorted_input.end());

        vector<int> output;

        for (int i = 0; i < sorted_input.size(); i++)
        {
            if (sorted_input[i] != input[i])
            {
                output.push_back(input[i]);
            }
        }

        if (output.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << output.size() << endl;
            for (auto num : output)
            {
                cout << num << " ";
            }
            cout << endl;
        }
    }
}