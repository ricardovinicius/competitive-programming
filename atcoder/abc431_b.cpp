#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve() {
    int x;
    cin >> x;
    
    int n;
    cin >> n;

    vector<int> w;

    for (int i = 0; i < n; i++) {
        int wi;
        cin >> wi;
        w.push_back(wi);
    }

    vector<bool> att(n, false);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int pi;
        cin >> pi;
        pi -= 1;
        
        if (att[pi] == true) {
            // cout << "Part: " << pi << " currently attached. " << "With current weight of: " << x << " Removing!" << endl; 
            x -= w[pi];
            att[pi] = false;
        } else {
            // cout << "Part: " << pi << " not attached. " << "With current weight of: " << x << " Adding!" << endl; 
            x += w[pi];
            att[pi] = true;
        }

        // cout << "Final weight in current step: " << i << endl;
        cout << x << endl;
    }
    
    return;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;

    while (t) {
        solve();
        t--;
    }
}