#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{
    double a, b, h, m;

    cin >> a >> b >> h >> m;

    double c = 30 * h;
    double d = 6 * m;
    double e;
    if (c > d)
    {
        e = c - d;
    }
    else if (d > c)
    {
        e = d - c;
    }
    if (e > 180)
    {
        e = abs(e - 180);
    }
    double f = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(e));
    cout << f << endl;
}