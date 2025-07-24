#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int find_pile_which_needs_max_one() {
    
}

void solve()
{
    int n;
    cin >> n;

    vector<int> zeros_per_pile(n);
    vector<int> ones_per_pile(n);

    vector<int> tgt_zeros_per_pile(n);
    vector<int> tgt_ones_per_pile(n);

    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        zeros_per_pile[i] = a;
        ones_per_pile[i] = b;

        tgt_zeros_per_pile[i] = c;
        tgt_ones_per_pile[i] = d;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Z: " << zeros_per_pile[i] << " O: " << ones_per_pile[i] << endl;
    }

    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t)
    {
        solve();
        t--;
    }
}