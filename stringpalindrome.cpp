#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int a = (n - 1) / 2;
    int b = (n + 3) / 2;
    char aa[a];
    char bb[a];
    bool c = true;

    if (s.substr(0, a) == s.substr(b - 1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}