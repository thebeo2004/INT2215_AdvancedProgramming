#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
#define MP make_pair
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 1e5 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;

ll F[MAXN];

ll get(int l, int r)
{
    if (l == 0) return F[r];
    return F[r] - F[l - 1];
}

void solve()
{
    int N; cin >> N;
    ff(i, 1, N)
    {
        int x; cin >> x;
        F[i] = F[i - 1] + x;
    }
    F[N + 1] = F[N];

    ff(i, 1, N)
    {
        if (get(0, i - 1) == get(i + 1, N + 1))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    int T; cin >> T;
    F[0] = 0;
    while(T--) solve();
    return 0;
}