#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H, W;
    cin >> H >> W;
    vector<vector<char>> S(H + 2, vector<char>(W + 2, '.'));
    for (int i = 1; i <= H; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < W; j++)
            S[i][j + 1] = s[j];
    }
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (S[i][j] == '#')
            {
                if (S[i - 1][j] == '.' && S[i][j - 1] == '.' && S[i][j + 1] == '.' && S[i + 1][j] == '.')
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
}