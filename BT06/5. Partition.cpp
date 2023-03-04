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

int arr[MAXN];

void Recursion(int N, int length, int MAX)
{
    if (N == 0)
    {
        ff(i, 0, length - 1) cout << arr[i] << " ";
        cout << "\n";
        return;
    }
    else
    {
        Rep(i, MAX, 1)
        {
            if (N - i >= 0)
            {
                arr[length] = i;
                Recursion(N - i, length + 1, i);
            }
        }
    }
}


void solve()
{
    int N; cin >> N;
    Recursion(N, 0, N);

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}
 