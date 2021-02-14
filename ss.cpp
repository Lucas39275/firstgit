#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{

    string s;
    cin >> s;
    string t, u, v;
    int a = s.size();
    int count;
    for (int i = a - 1; i > 0; i--)
    {
        t = s.substr(0, i);
        int b = t.size();
        if (t.size() % 2 == 1)
        {
            continue;
        }

        u = t.substr(0, b / 2);
        v = t.substr(b / 2, b);
        if (u == v)
        {
            count = u.size() + v.size();
            break;
        }
    }
    int aa = 0;
    cout << count << endl;
}