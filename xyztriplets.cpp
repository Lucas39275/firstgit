#include <bits/stdc++.h>
using namespace std;
int a[10001];
int main()
{
    int n;
    cin >> n;
    for (int x = 1; x < 100; x++)
    {
        for (int y = 1; y < 100; y++)
        {
            for (int z = 1; z < 100; z++)
            {
                int m = x * x + y * y + z * z + x * y + x * z + y * z;
                if (m <= 1e4)
                    a[m] += 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}