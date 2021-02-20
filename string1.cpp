#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

int main()
{
    string s;
    cin >> s;
    int a = s.size();
    bool b = true;
    for (int i = 0; i < a; i++)
    {

        if (i % 2 == 0 && ('a' <= s[i] && s[i] <= 'z'))
        {
            b = true;
        }
        else if (i % 2 == 1 && ('A' <= s[i] && s[i] <= 'Z'))
        {
            b = true;
        }
        else
        {
            b = false;
            break;
        }
    }

    if (b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}