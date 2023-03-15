#include <bits/stdc++.h>

using namespace std;

#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i, a, b) for(int i = a; i >= b; i--)
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 1e3 + 7;
const ll INF = 1e9 + 7;
const ll base = 311;

char txt[MAXN], pat[MAXN];

int compare(int i)
{
    if (strcmp(txt, pat + i) == 0) return 1;

    return 0;
}

void solve()
{
    cin >> txt >> pat;

    int i = 0, cnt = 0;

    while(pat[i] != '\0')
    {
        int j = i + 1;

        while(pat[j] != '\0')
        {
            char x = pat[j];

            pat[j] = '\0';

            cnt+= compare(i);

            pat[j] = x;

            j++;

        }

        cnt+= compare(i);

        i++;
    }

    cout << cnt;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}



