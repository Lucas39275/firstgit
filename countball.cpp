#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;
int main()
{

    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);
    vector<int> z(n);
    int count = 1;
    int count1 = 1;
    bool ab = true;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {

        cin >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        z[i] = i + 1;
    }

    do
    {
        for (int i = 0; i < n; i++)
        {
            if (z[i] = x[i])
            {
                ab = true;
            }
            else
            {
                ab = false;
                break;
            }
        }
        if (ab)
        {
            break;
        }
        else
        {
            count++;
        }

    } while (next_permutation(z.begin(), z.end()));
    ab = true;
    sort(z.begin(), z.end());
    do
    {
        for (int i = 0; i < n; i++)
        {
            if (z[i] = y[i])
            {
                ab = true;
            }
            else
            {
                ab = false;
                break;
            }
        }
        if (ab)
        {
            break;
        }
        else
        {
            count1++;
        }

    } while (next_permutation(z.begin(), z.end()));
    int sum = abs(count - count1);
    cout << sum << endl;
}