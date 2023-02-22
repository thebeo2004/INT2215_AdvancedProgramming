#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= int(b); i--)
#define MP make_pair
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 12;
const ll base = 311;
const ll INF = 1e9 + 7;
char arr[MAXN][MAXN];
int ans[MAXN][MAXN];
int check(char x)
{
    if (x == '.') return 0;
    return 1;
}
int count_bomb(int i, int j)
{
    return check(arr[i - 1][j - 1]) + check(arr[i - 1][j]) + check(arr[i - 1][j + 1]) 
            + check(arr[i][j - 1]) + check(arr[i][j + 1])
            + check(arr[i + 1][j - 1]) + check(arr[i + 1][j]) + check(arr[i + 1][j + 1]);
}
void display(int N, int M)
{
    ff(i, 1, N)
    {
        ff(j, 1, M)
        {
            if (arr[i][j] == '*') cout << '*' << " ";
            else cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}
void solve()
{
    int N, M; cin >> N >> M;
    ff(i, 1, N) ff(j, 1, M) cin >> arr[i][j];

    ff(i, 1, N)
    {
        ff(j, 1, M) ans[i][j] = count_bomb(i, j);
    }
    display(N, M);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    ff(i, 0, MAXN - 1) ff(j, 0, MAXN - 1) arr[i][j] = '.', ans[i][j] = 0;
    solve();
    return 0;
}