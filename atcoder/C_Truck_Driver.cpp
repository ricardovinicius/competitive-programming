#include <bits/stdc++.h> 

using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    // Para contar a quantidade de 'a's  e 'b's de intervalos da string utilizamos prefix sum

    vector<int> a_sum;
    a_sum.push_back(0);

    for (int i = 1; i <= n; i++) {
        a_sum.push_back(a_sum[i - 1] + (s[i - 1] == 'a'));
    }

    // A contagem de 'a's em (l,r) é igual a a_sum[r] - a_sum[l - 1]

    // Quanto maior o r, possivelmente maior a quantidade de 'a's no intervalo
    // Se encontramos o menor r, no intervalo (l,r) que faça com que a quantidade de 'a's seja superior a A
    // então daqui pra frente significa que todos os intervalos atendem esse primeiro critério.
    // Utilizamos bin_search pra achar o a_l, tal que a condição seja atendida para todo r >= a_l

    int res = 0;

    for (int i = 1; i < n; i++) {
        int x = i;
        int y = n - 1;
        int a_l = 0;

        bool found_al = false;

        while (x <= y) {
            int mid = ((y - x) / 2) + x;

            int a_count = a_sum[mid] - a_sum[i - 1];
            
            if (a_count < a) {
                x = mid + 1;
            } else if (a_count > a) {
                y = mid - 1;
            }
            else {
                a_l = mid;
                found_al = true;
                break;
            }
        }

        // if (!found_al) {
        //     continue;
        // }

        x = i;
        y = n - 1;
        int b_l = 0;

        bool found_bl = false;

        while (x <= y) {
            int mid = ((y - x) / 2) + x;

            int a_count = a_sum[mid] - a_sum[i - 1];
            int b_count = (y - x) - a_count;
            
            if (b_count < b) {
                x = mid + 1;
            } else if (b_count > b) {
                y = mid - 1;
            }
            else {
                b_l = mid;
                bool found_bl = false;
                break;
            }
        }

        int r_max = max(0, b_l - a_l + 1);
        res += r_max;
    }

    cout << res << endl;
}

int main(void) {
    int t = 1;
    // cin >> t;
    while(t){
        solve();
        t--;
    }
}