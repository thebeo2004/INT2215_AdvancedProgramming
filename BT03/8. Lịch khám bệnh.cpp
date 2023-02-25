#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
#define MP make_pair
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 1e6 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;

vector<int> v(MAXN);

void Merge(int l1, int r1, int l2, int r2)
{
    int *v1 = new int [r1 - l1 + 1], *v2 = new int [r2 - l2 + 1];
    ff(i, l1, r1) v1[i - l1] = v[i];
    ff(i, l2, r2) v2[i - l2] = v[i];

    int id1 = 0, id2 = 0, id = l1;
    while(id1 <= (r1 - l1) && id2 <= (r2 - l2))
    {
        if (v1[id1] <= v2[id2]) v[id] = v1[id1], id1++, id++;
        else v[id] = v2[id2], id2++, id++;
    }

    while(id1 <= (r1 - l1)) v[id] = v1[id1], id1++, id++;
    while(id2 <= (r2 - l2)) v[id] = v2[id2], id2++, id++;
}

void MergeSort(int l, int r)
{
    if (l >= r) return;
    int mid = (l + r)/2;
    MergeSort(l, mid);
    MergeSort(mid + 1, r);
    Merge(l, mid, mid + 1, r);
}

void solve()
{
    int N; cin >> N;
    ff(i, 1, N) cin >> v[i];

    MergeSort(1, N);
    
    ll sum = 0, ans = 0;
    ff(i, 1, N) sum+= v[i - 1], ans+= sum;

    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}