#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    set<int> ab;
    ab.insert(a);
    ab.insert(b);
    ab.insert(c);
    cout << ab.size() << endl;
}