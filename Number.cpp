#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{

    string n;
    long long k;
    cin >> n >> k;
    long long a;
    long long b;
    long long aa = stoi(n);
    long long sum = aa;
    string t = n;
    for (long long i = 0; i < k; i++)
    {
        sort(t.begin(), t.end());
        a = stoi(t);
        reverse(t.begin(), t.end());
        b = stoi(t);
        sum = b - a;
        t = to_string(sum);
    }
    int asd = 0;
    cout << sum << endl;
}