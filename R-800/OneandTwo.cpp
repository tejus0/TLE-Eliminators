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
        int two = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 2)
            {
                two++;
            }
        }
        int twoTillHere = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == 2)
            {
                twoTillHere++;
            }
            if (twoTillHere * 2 == two)
            {
                cout << i + 1 << endl;
                break;
            }
        }
        if(twoTillHere * 2 != two)
            cout << -1 << endl;
    }
    return 0;
}