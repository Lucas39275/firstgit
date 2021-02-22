#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> a(3), b(3);
    cin >> a[0] >> a[1] >> a[2];
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == max(a[0], max(a[1], a[2])))
            b[i] = 1;
        else if (a[i] == min(a[0], min(a[1], a[2])))
            b[i] = 3;
        else
            b[i] = 2;
    }
    for (int i = 0; i < 3; i++)
        cout << b[i] << endl;
    return 0;
}