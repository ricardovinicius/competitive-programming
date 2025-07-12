#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> vec_s;

    for (auto c : s)
    {
        vec_s.push_back(c);
    }

    sort(vec_s.begin(), vec_s.end());

    vector<char> ans;

    char single_in_the_middle = 'a';

    while (vec_s.size() > 0)
    {
        if (vec_s[vec_s.size() - 1] == vec_s[vec_s.size() - 2])
        {
            ans.push_back(vec_s[vec_s.size() - 1]);
            vec_s.pop_back();
            vec_s.pop_back();
        }
        else if (single_in_the_middle == 'a')
        {
            single_in_the_middle = vec_s[vec_s.size() - 1];
            vec_s.pop_back();
        }
        else
        {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }

    for (auto c : ans)
    {
        cout << c;
    }

    if (single_in_the_middle != 'a')
    {
        cout << single_in_the_middle;
    }

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }

    cout << endl;
}