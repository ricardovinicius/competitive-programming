#include <bits/stdc++.h>

using namespace std;

#define ll long long

int pow_mod(int base, int expo, int mod)
{
    int res = 1;

    if (expo == 0)
    {
        return res;
    }

    for (int i = 0; i < expo; i++)
    {
        res = (res * base) % mod;
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << pow_mod(2, n, pow(10, 9) + 7) << endl;
}