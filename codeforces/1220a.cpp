//
// Created by vinia on 6/5/2025.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string x;
    cin >> n >> x;

    int z_count = count(x.begin(), x.end(), 'z');
    int e_count = count(x.begin(), x.end(), 'e');
    int r_count = count(x.begin(), x.end(), 'r');
    int o_count = count(x.begin(), x.end(), 'o');
    int n_count = count(x.begin(), x.end(), 'n');

    vector<int> res;

    while (z_count != 0 || e_count != 0 || r_count != 0 || o_count != 0 || n_count != 0)
    {
        if (o_count != 0 && n_count != 0 && e_count != 0)
        {
            o_count--;
            n_count--;
            e_count--;

            res.push_back(1);
        }
        else
        {
            z_count--;
            e_count--;
            r_count--;
            o_count--;

            res.push_back(0);
        }
    }

    for (int i : res)
    {
        cout << i << " ";
    }
}