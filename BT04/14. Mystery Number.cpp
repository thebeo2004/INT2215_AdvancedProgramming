#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
#define MP make_pair
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 1e2 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;

vector<int> A(MAXN), B(MAXN);

void Swap(int &x, int &y)
{
    int c = y;
    y = x;
    x = c;
}

bool check(int x, int y)
{
    if (x <= y) return true;
    return false;
}

void sort(int N)
{
    ff(i, 1, N - 1)
    {
        ff(j, i + 1, N) if (!check(A[i], A[j])) swap(A[i], A[j]);
    }

    ff(i, 1, N)
    {
        ff(j, i + 1, N + 1) if (!check(B[i], B[j])) swap(B[i], B[j]);
    }
}

void solve()
{
    int N; cin >> N;
    ff(i, 1, N) cin >> A[i];
    ff(i, 1, N + 1) cin >> B[i];
    sort(N);
    ff(i, 1, N)
    {
        if (A[i] != B[i]) 
        {
            cout << B[i];
            return;
        }
    }
    cout << B[N + 1];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}