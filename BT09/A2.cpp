#include <bits/stdc++.h>

using namespace std;

#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 1e6 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;



void solve()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; //Lỗi giải phóng quá sớm -> p2 cũng mất hiệu lực
    *p2 = 100; //p2 truy cập vào vùng nhớ đã được giải phóng
    cout << *p2; //p2 truy cập vào vùng nhớ đã được giải phóng
    delete p2; //giải phóng 1 vùng nhớ 2 lần

}
