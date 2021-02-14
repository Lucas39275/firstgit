#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{

    int n;
    cin >> n;
    vector<tuple<string, int, int>> score(n);
    string s;
    int m;
    rep(i, n)
    {
        cin >> get<0>(score[i]);
        cin >> get<1>(score[i]);
        get<1>(score[i]) *= -1;
        get<2>(score[i]) = i + 1;
    }
    sort(score.begin(), score.end());
    for (int i = 0; i < n; i++)
    {
        cout << get<2>(score[i]) << endl;
    }
}