#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
 
    // ソートしておく
    sort(A.begin(), A.end());
 
    // 累積和
    vector<long long> S(N+1, 0);
    for (int i = 0; i < N; ++i) S[i+1] = S[i] + A[i];
 
    // 答えを求める
    long long res = 0;
    for (int i = 0; i < N; ++i) res += A[i] * i - S[i];
    cout << res << endl;
}