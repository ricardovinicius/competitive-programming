//
// Created by vinia on 6/6/2025.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string foo;

    cin >> n >> foo;

    int sf_count = 0;
    int fs_count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        string travel = foo.substr(i, 2);

        if (travel == "SF") {
            sf_count++;
        } else if (travel == "FS")
        {
            fs_count++;
        }
    }

    cout << (sf_count > fs_count ? "YES" : "NO") << endl;
}