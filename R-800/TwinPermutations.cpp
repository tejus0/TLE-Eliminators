#include <bits/stdc++.h>
using namespace std;

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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = n + 1 - arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
