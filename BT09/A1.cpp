#include <bits/stdc++.h>

using namespace std;

#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 1e6 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;

char *concat(const char* a, const char* b)
{
    int length = strlen(a) + strlen(b);

    char* ans = new char[length + 5];

    ff(i, 0, strlen(a) - 1)
        ans[i] = a[i];

    ff(i, 0, strlen(b) - 1)
        ans[strlen(a) + i] = b[i];

    return ans;
}