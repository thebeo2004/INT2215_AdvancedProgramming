#include <bits/stdc++.h>

using namespace std;

#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 1e6 + 7;
const ll base = 311;
const ll INF = 1e9 + 7;

//c1.a
void swap(char* a, char* b)
{
    char tmp = *a;

    *a = *b;

    *b = tmp;
}

void reverse(char a[])
{
    char* head = a, *tail = a;

    int length = 1;

    while(*(tail + 1) != '\0') tail++, length++;

    length/=2;

    while(length--)
    {
        swap(head, tail);
        head++;
        tail--;
    }
}

//c1.b
void remove(char a[], int pos)
{
    while(a[pos] != '\0')
        a[pos] = a[pos + 1],
        pos++;
}

void delete_char(char a[], char c)
{
    int pos = 0;

    while(a[pos] != '\0')
    {
        if (a[pos] == c)
            remove(a, pos);

        if (a[pos] != c) pos++;
    }
}

//c1.c
void pad_right(char a[], int n)
{
    if (strlen(a) >= n) return;

    ff(i, strlen(a), n - 1) a[i] = ' ';

    a[n] = '\0';
}

//c1.d
void add(char a[])
{
    Rep(i, strlen(a), 1)
        a[i] = a[i - 1];
        
    a[0] = ' ';
}

void pad_left(char a[], int n)
{
    if (strlen(a) >= n) return;

    n -= strlen(a);

    while(n--) add(a);
}

//c1.e
void truncate(char a[], int n)
{
    if (strlen(a) <= n) return;

    a[n] = '\0';
}

//c1.f
bool is_palindrome(char a[])
{
    int length = strlen(a);

    int l = 0, r = length - 1;

    while(r >= l)
    {
        if (a[l] != a[r]) return false;

        l++;

        r--;
    }
    return true;
}

//c1.g
void trim_left(char a[])
{
    while(a[0] == ' ') remove(a, 0);
}

//c1.h
void trim_right(char a[])
{
    int length = strlen(a);

    while(a[length - 1] == ' ')
        a[length - 1] = '\0',
        length--;
}