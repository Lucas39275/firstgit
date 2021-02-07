#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{
    int n;
    cin >> n;
    vector<double> x(n);
    vector<double> y(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    double a;
    double b;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            a = x[j] - x[i];
            b = y[j] - y[i];
            if (-1 <= b / a && b / a <= 1)
            {
                count++;
            }
        }
    }
    int aa = 0;
    cout << count << endl;
}