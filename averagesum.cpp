#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

double commbination(double n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * commbination(n - 1);
    }
}

int main()
{

    double n;
    cin >> n;
    double an = commbination(n);
    vector<pair<double, double>> a(n);
    vector<double> x(n);
    vector<double> y(n);
    vector<double> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
        p[i] = i;
    }

    double sum = 0;
    do
    {
        for (int i = 0; i < n - 1; i++)
        {

            sum += sqrt(pow(x[p[i]] - x[p[i + 1]], 2) + pow(y[p[i]] - y[p[i + 1]], 2));
        }
    } while (next_permutation(p.begin(), p.end()));
    int aa = 0;
    cout << fixed << setprecision(15) << sum / an << endl;
}