#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{

    string s;
    cin >> s;
    int cnt[4] = {0, 4, 6, 8};
    vector<string> aki;
    for (int bit = 0; bit < (1 << 4); bit++)
    {
        string t = "AKIHABARA";
        for (int i = 3; i >= 0; i--)
        {
            if (bit & (1 << i))
            {
                t.erase(t.begin() + cnt[i]);
            }
        }
        aki.push_back(t);
    }
    for (int i = 0; i < aki.size(); i++)
    {
        if (s == aki[i])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}