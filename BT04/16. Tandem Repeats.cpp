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

vector<ll> hash_value(MAXN), POW(MAXN);
vector<vector<ll>> F(MAXN);
//F[i][j] = 1 + (base^i)^1 + (base^i)^2 + ... + (base^i)^(j - 1)

void Hash(string txt, int length)
{
    hash_value[0] = 0;
    POW[0] = 1;

    ff(i, 1, length)
    {
        hash_value[i] = (hash_value[i - 1]*base + txt[i])%INF;

        POW[i] = POW[i - 1]*base%INF;
    }
}

ll get_hash(int l, int r)
{
    ll res = (hash_value[r] - hash_value[l - 1]*POW[r - l + 1]%INF)%INF;
    if (res < 0) res+= INF;

    return res;
}

void construct(int N)
{
    ff(i, 1, N)
    {
        ll a = 1;
        F[i].push_back(0);  

        ff(j, 1, N/i + 2)
        {
            F[i].push_back((F[i].back() + a)%INF);
            a = (a*POW[i])%INF;
        }
    }
}

bool f(ll val, int length, int mid, int l, int r)
{
    if (val*F[length][mid]%INF == get_hash(l, r)) return true;
    return false;
}

void solve()
{
    int N, T; cin >> N >> T;
    string txt; cin >> txt;
    txt = "#" + txt;

    Hash(txt, N);
    construct(N);

    while(T--)
    {
        int i, j; cin >> i >> j;

        ll val = get_hash(i, j), length = j - i + 1;
        int l = 1, r = (N - i + 1)/length, ans;

        while(r >= l)
        {
            int mid = (l + r)/2;
            if (f(val, length, mid, i, i + mid*length - 1)) ans = mid, l = mid + 1;
            else r = mid - 1;
        }

        cout << ans << "\n";

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