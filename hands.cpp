#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a == b)
    {
        cout << x << "\n";
    }
    else if (a > b)
    {
        int d = a - b;
        cout << min(x + (d - 1) * y, (2 * d - 1) * x) << "\n";
    }
    else
    {
        int d = b - a;
        cout << min(x + d * y, (2 * d + 1) * x) << "\n";
    }
    return 0;
}