#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> input;

    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        input.push_back(a);
    }

    set<string> concats;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }

            string tmp = input[i];

            concats.insert(tmp.append(input[j]));
        }
    }

    cout << concats.size() << endl;
}