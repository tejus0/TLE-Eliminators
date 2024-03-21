#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
     if (b == 0)
          return a;
     return gcd(b, a % b);
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x = 1e9;
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                x = min(x, gcd(ar[i], ar[j]));
            }
        }
        if (x <= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}