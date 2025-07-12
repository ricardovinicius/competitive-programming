#include <bits/stdc++.h>

using namespace std;

template <typename T>

void print_vector(vector<T> v)
{
    for (auto a : v)
    {
        cout << a;
    }
    cout << endl;
}

void solve(int n)
{
    vector<bool> bits(n, 0);

    print_vector(bits);

    int one_pos = bits.size() - 1;

    while (true)
    {
        if (bits[one_pos] == 0)
        {
            bits[one_pos] = 1;
        }
        else if (one_pos > 0 && bits[one_pos - 1] == 0)
        {
            bits[one_pos - 1] = 1;
        }
        else
        {
            bits[one_pos] = 0;
            one_pos -= 1;
        }

        print_vector(bits);

        if (one_pos == 0)
        {
            return;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    solve(n);
}