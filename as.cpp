#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{

    long long n;
    cin >> n;

    set<long long> a;

    for (long long i = 1; i <= n; i++)
    {
        if (i & n != 0)
        {
            a.insert(i);
        }
    }
}