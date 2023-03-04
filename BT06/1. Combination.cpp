#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
#define MP make_pair
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 125 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;

char ans[MAXN];

void Recursion(char l, char r, int length, int k)
{

    if (length == k)
    {
        ff(i, 0, length - 1) cout << ans[i];
        cout << "\n";
        return;
    }

    if (l > r) return;
    else
    {
        ff(i, l, r)
        {
            ans[length] = i;
            Recursion(i + 1, r, length + 1, k);
        }
    }
}

void solve()
{
    int N, K; cin >> N >> K;
    Recursion('a', 'a' + N - 1, 0, K);

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}
 