#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i <= 10000; i++)
    {

        if (i * 100 <= x && x < (i + 1) * 100)
        {
            cout << (i + 1) * 100 - x << endl;
            return 0;
        }
    }
}