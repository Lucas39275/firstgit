#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
using ll = long long;
int main()
{
    int h, n;
    int sum = 0;
    cin >> h >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (sum < h)
        {
            sum += a[i];
        }
    }
    if (sum >= h)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No" << endl;
    }
}