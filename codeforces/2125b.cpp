#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;

    if (a <= k && b <= k) {
        cout << 1 << endl;
        return;
    }

    ll g = gcd(a, b);
    if (a / g <= k && b / g <= k) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
