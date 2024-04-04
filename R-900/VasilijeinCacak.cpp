#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long low = (k * (k + 1)) / 2;

        long long high = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

        if (x >= low && x <= high)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}