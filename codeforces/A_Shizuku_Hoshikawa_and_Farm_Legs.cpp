#include <bits/stdc++.h> 

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 2 != 0) {
        cout << 0 << endl;
        return;
    }

    cout << 1 + (n / 4) << endl;
}

int main(void) {
    int t = 1;
    cin >> t;
    while(t){
        solve();
        t--;
    }
}