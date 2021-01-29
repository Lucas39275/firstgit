#include <iostream>
#include <cctype>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int a = s.size();
    set<char> S;
    set<char> T;
    int count = 0;
    int max1 = 0;
    for (int i = 0; i < a - 1; i++) //二つに文字列を分割する
    {

        for (int j = 0; j <= i; j++) //右側を一文字ずつ挿入
        {
            S.insert(s[j]);
        }
        for (int k = i + 1; k < a; k++) //左画を一文字ずつ挿入
        {
            T.insert(s[k]);
        }
        for (auto value : S)
        {
            if (S.count(value) == T.count(value))
            {
                count++;
            }
        }
        max1 = max(max1, count);
        count = 0;

        S.clear();
        T.clear();
    }

    int aa = 0;
    cout << max1 << endl;
}