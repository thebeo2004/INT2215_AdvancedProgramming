#include <bits/stdc++.h>

using namespace std;

#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i, a, b) for(int i = a; i >= b; i--)
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 4*1e4 + 7;
const ll INF = 1e9 + 7;
const ll base = 311;

int count_event(int* a, int n)
{
    int ans = 0;

    ff(i, 0, n - 1)
    {
        if (*(a + i) % 2 == 0) ans++;
    }

    return ans;
}

void solve()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
    cout << count_event(arr, 5) << "\n";
    cout << count_event(&arr[5], 5);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}
