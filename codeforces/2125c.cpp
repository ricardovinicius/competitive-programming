#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

bool is_a_good_number(int n) {
    if (n <= 10) {
        return false;
    }

    if (n % 2 == 0) {
        return false;
    }

    if (n % 3 == 0) {
        return false;
    }

    if (n % 5 == 0) {
        return false;
    }

    if (n % 7 == 0) {
        return false;
    }

    return true;
}

void solve()
{
    ll l, r;
    cin >> l >> r;

    ll ans = 0;

    for (ll i = l; i <= r; i++) {
        ans += is_a_good_number(i);
    }

    cout << ans << endl;
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