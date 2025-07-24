#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int n = 3;
vector<int> subset;

template <typename T>
void print_vector(vector<T> v)
{
    for (auto a : v)
    {
        cout << a << " ";
    }
    cout << endl;
}

void search(int k)
{
    if (k == n)
    {
        print_vector(subset);
        // process subset
    }
    else
    {
        search(k + 1);
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
    }
}

int main(void)
{
    search(0);

    for (int b = 0; b < (1 << n); b++)
    {
        vector<int> subset;
        for (int i = 0; i < n; i++)
        {
            if (b & (1 << i))
                subset.push_back(i);
        }
        print_vector(subset);
    }
}