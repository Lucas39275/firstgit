#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int count = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    count = a[0];
    while (count != 2)
    {
        count = a[count - 1];
        if (b[count] == 0)
        {
            count1++;
            b[count]++;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << count1 + 1 << endl;
    return 0;
}