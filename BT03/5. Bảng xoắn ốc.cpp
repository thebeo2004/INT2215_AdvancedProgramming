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
int arr[MAXN][MAXN];
#define row first
#define col second
void construct(pi left_up, pi right_down, int &val)
{
    ff(j, left_up.col, right_down.col) arr[left_up.row][j] = val, val++;

    ff(i, left_up.row + 1, right_down.row) arr[i][right_down.col] = val, val++;

    if (left_up.row == right_down.row || left_up.col == right_down.col) return;

    Rep(j, right_down.col - 1, left_up.col) arr[right_down.row][j] = val, val++;

    Rep(i, right_down.row - 1, left_up.row + 1) arr[i][left_up.col] = val, val++;  
   
}
void display(int N, int M)
{
    ff(i, 1, N)
    {
        ff(j, 1, M) cout << arr[i][j] << " ";
        cout << "\n";
    }
}
void solve()
{
    int N, M; cin >> N >> M;
    pi left_up = {1, 1}, right_down = {N, M};
    int val = 1;
    while(right_down.row >= left_up.row && right_down.col >= left_up.col)
    {
        construct(left_up, right_down, val);
        left_up.row++; left_up.col++;
        right_down.row--; right_down.col--;
    }
    display(N, M);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}