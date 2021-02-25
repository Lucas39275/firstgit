#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    bool a = true;
    int max1 = 0;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        count += s[i];
    }
    if (count % 10 != 0)
    {
        cout << count << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }

            else
            {
                count += s[j];
            }
        }
        max1 = max(count, max1);
    }
    int aa = 0;
    if (max1 % 10 != 0)
    {
        cout << max1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}