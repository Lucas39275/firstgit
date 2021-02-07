#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

typedef pair<ll, ll> Pair;

long long minn = 1e15; // 最小値を求めるための値

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{

    int n, r;

    printf("n:");
    scanf("%d", &n);
    printf("r:");
    scanf("%d", &r);

    printf("%d C %d = %d\n", n, r, combination(n, r));

    return 0;
}