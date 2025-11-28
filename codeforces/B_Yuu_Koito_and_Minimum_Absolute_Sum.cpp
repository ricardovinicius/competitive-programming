#include <bits/stdc++.h> 

using namespace std;

void print_arr(vector<int> v) {
    for (auto a : v) {
        cout << a << " ";
    }

    cout << endl;
}

void solve() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    if (v[n - 1] == -1) {
        // cout << "Caso 1" << endl;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == -1) {
                v[i] = 0;
            }
        }

        int abs_sum = 0;

        for (int i = 0; i < n - 2; i++) {
            abs_sum += v[i + 1] - v[i];
        }

        v[n - 1] = v[n - 2] - abs_sum;
        abs_sum += v[n - 1] - v[n - 2];

        cout << abs(abs_sum) << endl;
        print_arr(v);
    } else if (v[0] == -1) {
        // cout << "Caso 2" << endl;
        for (int i = 1; i < n; i++) {
            if (v[i] == -1) {
                v[i] = 0;
            }
        }

        int abs_sum = 0;

        for (int i = 1; i < n - 1; i++) {
            abs_sum += v[i + 1] - v[i];
        }
        
        v[0] = abs_sum + v[1];
        abs_sum += v[1] - v[0];

        cout << abs(abs_sum) << endl;
        print_arr(v);
    } else {
        // cout << "Caso 3" << endl;
        for (int i = 0; i < n; i++) {
            if (v[i] == -1) {
                v[i] = 0;
            }
        }

        int abs_sum = 0;

        for (int i = 0; i < n - 1; i++) {
            abs_sum += v[i + 1] - v[i];
        }

        cout << abs(abs_sum) << endl;
        print_arr(v);
    }
}

int main(void) {
    int t = 1;
    cin >> t;
    while(t){
        solve();
        t--;
    }
}