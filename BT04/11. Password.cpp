#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
#define MP make_pair
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 1e2 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;

vector<string> txt(MAXN);

string reverString(string a)
{
    string ans;
    Rep(i, int(a.size()) - 1, 0) ans+= a[i];
    return ans;
}

bool check(string a, string b)
{
    b = reverString(b);
    if (a == b) return true;
    return false;
}

void solve()
{
    int N; cin >> N;
    ff(i, 1, N) cin >> txt[i];
    ff(i, 1, N - 1)
    {
        ff(j, i + 1, N)
        {
            if (check(txt[i], txt[j]))
            {
                cout << txt[i].size() << " ";
                txt[i] = "#" + txt[i];
                cout << txt[i][int(txt[i].size()) /2];
                return;
            }
        }
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