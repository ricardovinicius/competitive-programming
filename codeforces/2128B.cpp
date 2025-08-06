#include <bits/stdc++.h>
using namespace std;

bool bad_tail(const vector<int>& f) {
    if (f.size() < 5) return false;
    int k = (int)f.size() - 1;
    bool inc = true, dec = true;
    for (int i = 0; i < 4; ++i) {
        if (!(f[k - i] > f[k - i - 1])) inc = false;
        if (!(f[k - i] < f[k - i - 1])) dec = false;
    }
    return inc || dec;
}

bool search(const vector<int>& v, vector<int>& f, int l, int r, string& moves) {
    if (bad_tail(f)) return false;

    if ((int)f.size() == (int)v.size()) {
        cout << moves << '\n';
        return true;
    }

    // try take from right
    moves.push_back('R');
    f.push_back(v[r]);
    if (search(v, f, l, r - 1, moves)) return true;
    f.pop_back();
    moves.pop_back();

    // try take from left
    moves.push_back('L');
    f.push_back(v[l]);
    if (search(v, f, l + 1, r, moves)) return true;
    f.pop_back();
    moves.pop_back();

    return false;
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int& x : v) cin >> x;

    if (n < 5) {
        // any sequence works
        cout << string(n, 'L') << '\n';
        return;
    }

    vector<int> f;
    string moves;
    if (!search(v, f, 0, n - 1, moves)) {
        // if the problem requires, print something when impossible
        // cout << -1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
