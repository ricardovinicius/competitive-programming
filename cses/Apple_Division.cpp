#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void search(ll k, vector<vector<ll>> &subsets, vector<ll> &subset, vector<ll> &nums)
{
    if (k == nums.size())
    {
        subsets.push_back(subset);
    }
    else
    {
        search(k + 1, subsets, subset, nums);
        subset.push_back(nums[k]);
        search(k + 1, subsets, subset, nums);
        subset.pop_back();
    }
}

vector<ll> get_vector_complement(vector<ll> a, vector<ll> b)
{
    for (auto x : b)
    {
        auto i = find(a.begin(), a.end(), x);

        if (i != a.end())
        {
            a.erase(i);
        }
    }

    return a;
}

void solve()
{
    ll n;
    vector<ll> v;
    for (cin >> n; n > 0; n--)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    vector<vector<ll>> subsets;
    vector<ll> s;
    search(0, subsets, s, v);

    ll sm_diff = INT32_MAX;

    for (auto ss : subsets)
    {
        auto comp = get_vector_complement(v, ss);
        ll diff = abs(accumulate(comp.begin(), comp.end(), 0ll) - accumulate(ss.begin(), ss.end(), 0ll));

        // cout << diff << endl;
        if (diff < sm_diff)
        {
            sm_diff = diff;
        }
    }

    cout << sm_diff << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}