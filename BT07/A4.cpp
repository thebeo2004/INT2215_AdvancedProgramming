#include <bits/stdc++.h>

using namespace std;

#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i, a, b) for(int i = a; i >= b; i--)
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 4*1e4 + 7;
const ll INF = 1e9 + 7;
const ll base = 311;

void Binary_Search(int *arr, int n, int val)
{
    int l = 1, r = n;

    int ans;

    while(r >= l)
    {
        int mid = (l + r)/2;
        
        if (arr[mid] >= val) ans = mid, r = mid - 1;

        else ans = mid + 1, l = mid + 1;

    }

    cout << ans;
}

void solve()
{
    int arr[] = {-INF, 1, 2, 2, 3, 3, 6, 6, 7, 8, 9, 9, 10};
    Binary_Search(arr, 12, 6);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}
