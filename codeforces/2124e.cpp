#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void solve() {
    int n; cin>>n;
    
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int a;
        cin>>a;
        vec.push_back(a);
    }

    int r = vec.size() - 1;
    int l = 0;

    int r_sum = 0;
    int l_sum = 0;

    while (l < r) {
        if (l_sum > r_sum) {
            r_sum += vec[r--];
        } else {
            cout << l << endl;
            l_sum += vec[l++];
        }
    }

    cout << l_sum - r_sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    for (cin>>t; t > 0; t--) {
        solve();
    }
}