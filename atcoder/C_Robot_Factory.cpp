#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> wh;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        wh.push_back(a);
    }

    vector<int> wb;

    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        wb.push_back(a);
    }

    sort(wh.begin(), wh.end());
    sort(wb.begin(), wb.end());
    
    int i = n - 1;
    int j = m - 1;

    

    while (i >= 0 && j >= 0) {
        if (wh[i] <= wb[j]) {
            k--;
            i--;
            j--;
        } else {
            i--;
        }

        if (k <= 0) {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
}

int main(void) {
    int t = 1;
    // cin >> t;
    while(t) {
        solve();
        t--;
    }
}