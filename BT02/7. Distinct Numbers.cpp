#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= int(b); i--)
#define MP make_pair
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 1e5 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;

void solve()
{
    int pre_val = -INF;
    while(true)
    {
        int x; cin >> x;
        if (x < 0) break;
        if (x != pre_val) cout << x << " ", pre_val = x;

    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}