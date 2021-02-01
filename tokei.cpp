#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
#define rep(i, n) for (long long int i = 1; i < (n); i++)
#define MOD 1000000007
const double pi = acos(-1);
int main()
{

    double a, b, h, m;

    cin >> a >> b >> h >> m;

    double c = 30 * h + m / 2;
    double d = 6 * m;
    double j = abs(c - d);
    if (j >= 180)
    {
        j = 360 - j;
    }
    double x = sqrt(a * a + b * b - 2 * a * b * cos(j * pi / 180));

    cout << fixed << std::setprecision(15) << x << endl;
    return 0;
}