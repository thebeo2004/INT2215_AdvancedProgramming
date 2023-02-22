#include <bits/stdc++.h>

using namespace std;

#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 3*1e4 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;

ll solve(vector<vector<int>> steps)
{
    ll pos_x = INF, pos_y = INF;
    ff(i, 0, int(steps.size()) - 1)
    {
        pos_x = min(pos_x, ll(steps[i][0]));
        pos_y = min(pos_y, ll(steps[i][1]));
    }
    return pos_x*pos_y;
}