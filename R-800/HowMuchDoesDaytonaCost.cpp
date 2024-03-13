#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == x)
                found = true;
        }
        found == true ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}