#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
#define rep(i, n) for (long long int i = 1; i < (n); i++)
#define MOD 1000000007

int main()
{
    long long int h, w, n, len, count = 0, a, b = 1, ans = 0, f = 0;

    string s;
    cin >> s;
    len = s.size();

    rep(i, len)
    {
        if (s[i] != '9')
        {
            f = 1;
            break;
        }
    }

    if (f == 0)
        cout << s[0] - '0' + 9 * (len - 1) << endl;

    else
        cout << (s[0] - '0') - 1 + 9 * (len - 1) << endl;

    return 0;
}