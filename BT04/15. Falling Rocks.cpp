#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
#define MP make_pair
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 1e3 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;

char arr[MAXN][MAXN];

bool F[MAXN][MAXN];

void initialize(int M, int N)
{
    ff(i, 1, M - 1)
    {
        ff(j, 1, N)
        {
            F[i][j] = true;
            if (arr[i - 1][j] == 'R' || arr[i][j] == 'R') F[i][j] = false;
        }
    }
}
void solve()
{
    int N, M; cin >> N >> M;

    ff(i, 0, M - 1)
    {
        ff(j, 1, N)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'Y') F[0][j] = true;
        }
    }

    initialize(M, N);
    
    ff(t, 1, M - 1)
    {
        bool flag = false;
        ff(j, 1, N)
        {
            if (F[t][j])
            {
                if (F[t - 1][j - 1] || F[t - 1][j + 1] || F[t - 1][j]) flag = true;
                else F[t][j] = false;
            }
        }

        if (!flag)
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}