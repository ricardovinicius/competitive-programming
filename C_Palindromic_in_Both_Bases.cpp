#include <bits/stdc++.h>

#define endl "\n"
#define ll long long int

using namespace std;

bool is_a_palindrome(vector<int> v)
{
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        if (v[i] != v[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

vector<int> convert_to_base_n(ll n, int base)
{
    vector<int> ans;

    while (n > 0)
    {
        int pos = 0;
        int tmp = n;
        int res = 0;

        if (tmp < base)
        {
            res = tmp;
        }
        else
        {
            while ((tmp /= base) > 0)
            {
                pos++;

                if (tmp < base)
                {
                    res = tmp;
                }

                if (tmp == base)
                {
                    res = 1;
                }
            }
        }

        if (ans.empty())
        {
            for (int i = 0; i <= pos; i++)
            {
                ans.push_back(0);
            }
        }

        ans[ans.size() - pos - 1] = res;

        n -= pow(base, pos) * res;
    }

    return ans;
}

vector<int> convert_to_base_n_opt(ll n, int base)
{
    vector<int> a;

    while (n > 0)
    {
        a.push_back(n % base);
        n /= base;
    }

    reverse(a.begin(), a.end());

    return a;
}

vector<int> ll_to_vector(ll n)
{
    vector<int> a;

    while (n > 0)
    {
        a.push_back(n % 10);
        n /= 10;
    }

    reverse(a.begin(), a.end());

    return a;
}

string ll_to_str(ll n)
{
    string a;

    while (n > 0)
    {
        a.push_back('0' + n % 10);
        n /= 10;
    }

    reverse(a.begin(), a.end());

    return a;
}

ll str_to_ll(string s)
{
    ll ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        ans += (s[i] - '0') * pow(10, (s.size() - i - 1));
    }

    return ans;
}

void solve()
{
    ll a, n;
    cin >> a >> n;

    ll k = 1;
    ll ans = 0;

    while (true)
    {
        string s_k = ll_to_str(k);
        string reverse_s_k = s_k;
        reverse(reverse_s_k.begin(), reverse_s_k.end());

        string str_p_odd = s_k;
        str_p_odd.append(reverse_s_k.begin() + 1, reverse_s_k.end());

        ll p_odd = str_to_ll(str_p_odd);

        if (p_odd > n)
        {
            break;
        }

        if (is_a_palindrome(convert_to_base_n_opt(p_odd, a)))
        {
            ans += p_odd;
        }

        string str_p_even = s_k;
        str_p_even.append(reverse_s_k.begin(), reverse_s_k.end());

        ll p_even = str_to_ll(str_p_even);

        if (p_even <= n)
        {
            if (is_a_palindrome(convert_to_base_n_opt(p_even, a)))
            {
                ans += p_even;
            }
        }

        k += 1;
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}