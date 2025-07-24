#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = {2, 4, 2, 5, 1};

    cout << v.back() << "\n"; // 1
    v.pop_back();
    cout << v.back() << "\n"; // 5

    // size 10, initial value 5
    vector<int> v_2(10, 5);

    string a = "hatti";
    string b = a + a;
    cout << b << "\n"; // hattihatti
    b[5] = 'v';
    cout << b << "\n"; // hattivatti
    string c = b.substr(3, 4);
    cout << c << "\n"; // tiva

    // B-TREE O(logn)
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    cout << s.count(3) << "\n"; // 1
    cout << s.count(4) << "\n"; // 0
    s.erase(3);
    s.insert(4);
    cout << s.count(3) << "\n"; // 0
    cout << s.count(4) << "\n"; // 1

    // HASH O(logn)
    unordered_set<int> u_s;
    u_s.insert(3);
    u_s.insert(2);
    u_s.insert(5);
    cout << u_s.count(3) << "\n"; // 1
    cout << u_s.count(4) << "\n"; // 0
    u_s.erase(3);
    u_s.insert(4);
    cout << u_s.count(3) << "\n"; // 0
    cout << u_s.count(4) << "\n"; // 1

    cout << *u_s.begin() << endl;

    solve();
}