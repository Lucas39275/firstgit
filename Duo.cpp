#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long L;
    cin >> L;
    long long res = 1;
    for (int i = 1; i <= 11; ++i)
    {
        res *= L - i;
        res /= i;
    }
    cout << res << endl;
}