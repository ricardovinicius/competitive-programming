#include <bits/stdc++.h> 

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>());

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            char a;
            cin >> a;
            v[i].push_back(a);
        }
    }

    set<string> p;

    for (int i = 0; i <= n - m; i++) {
        for (int j = 0; j <= n - m; j++) {
            string s;
            for (int x = i; x < i + m; x++) {
                for (int y = j; y < j + m; y++) {
                    s.push_back(v[x][y]);
                }
            }

            p.insert(s);
        }
    }

    cout << p.size() << endl;
}

int main(void) {
    int t = 1;
    // cin >> t;
    while(t){
        solve();
        t--;
    }
}