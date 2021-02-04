#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

long long minn = 1e15; // 最小値を求めるための値

int main()
{

    long long n;
    cin >> n;

    for (long long i = 1; i * i <= n; i++) //約数列挙
    {
        if (n % i == 0)
        {
            long long a = i + n / i - 2;
            minn = min(minn, a);
        }
    }
    int aa = 0;
    cout << minn << endl;
}