#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long total = b;

        for (auto x : arr)
        {
            total += min(1LL + x, a * 1LL) - 1;
        }
        cout << total << endl;
    }
    return 0;
}