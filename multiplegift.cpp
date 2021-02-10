#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{
    long long x, y;
    cin >> x >> y;
    long long count = 0;
    long long sum = x;
    for (long long i = x; i <= y; i++)
    {

        if (i == x)
        {
            count++;
            continue;
        }
        if (sum * 2 <= y)
        {
            count++;
            sum *= 2;
        }
        if (sum * 2 > y)
        {
            break;
        }
    }
    int aa = 0;
    cout << count << endl;
}