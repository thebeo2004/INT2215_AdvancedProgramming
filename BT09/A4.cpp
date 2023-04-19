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
    int a = 5;
    int *ptr = &a;

    delete ptr;

    cout << 5;

    //Sau khi  thử nghiệm, thì thấy IDE chạy liên hồi không có dấu hiệu dừng lại, minh chứng là việc không có kết quả 5 được in ra, và quạt kêu rất to.
}