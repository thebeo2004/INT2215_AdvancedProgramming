#include <bits/stdc++.h>

using namespace std;

#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i, a, b) for(int i = a; i >= b; i--)
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 4*1e4 + 7;
const ll INF = 1e9 + 7;
const ll base = 311;

char* werid_string()
{
    char c[] = "abc123";
    return c;
}

void solve()
{
    cout << *(werid_string);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}

//Complier: warning: address of local variable 'c' returned [-Wreturn-local-addr]
    //  char c[] = "abc123";

//Biến địa phương đã bị thu hồi, tuyệt đối không truy nhập.
//Khắc phục: Cấp bộ nhớ động.
