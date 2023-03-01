#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
#define MP make_pair
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 2e2 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;


void solve()
{
    int N; cin >> N;
    ff(i, 1, N)
    {
        ff(j, 1, i - 1) cout << " ";
        ff(j, i, N) cout << "*";
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}