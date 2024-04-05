#include <bits/stdc++.h>
using namespace std;
#define nl endl;
#define ll long long
#define sp " "

bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (even(n))
        {
            cout << 2 << nl;
            cout << 1 << " " << n << nl;
            cout << 1 << " " << n << nl;
        }
        else
        {
            cout << 4 << nl;
            // destroy a1..an-1 -> even
            cout << 1 << sp << n - 1 << nl;
            cout << 1 << sp << n - 1 << nl;
            // destroy an-1an -> even
            cout << n - 1 << sp << n << nl;
            cout << n - 1 << sp << n << nl;
        }
    }
    return 0;
}