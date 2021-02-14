#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N + 1), B(N);
    for (int i = 0; i < N + 1; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
        cin >> B[i];

    long long ans = 0;
    for (int i = 0; i < N; i++)
    {
        long long first = 0;
        first = min(A[i], B[i]);
        A[i] -= first;
        B[i] -= first;
        ans += first;

        long long second = 0;
        second = min(A[i + 1], B[i]);
        A[i + 1] -= second;
        B[i] -= second;
        ans += second;
    }

    cout << ans << endl;

    return 0;
}