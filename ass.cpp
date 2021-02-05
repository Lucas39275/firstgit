#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    for (int i = 59; i >= 0; i--)
    {
        if ((N >> i & 1) == 1)
        {
            cout << ((long long)1 << i) << endl;
            break;
        }
    }
}