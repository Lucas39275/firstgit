#include <bits/stdc++.h>
#define ff first
#define ss second
#define endl '\n'
#define INF 1e9

using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 1;
    string s;
    cin >> n;
    cin >> s;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
            ans++;
    }

    cout << ans << endl;

    return 0;
}