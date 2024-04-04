#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        vector<pair<int, int>> directions = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        // Attacking positions for king, queen
        set<pair<int, int>> st1, st2;
        for (auto d : directions)
        {
            int x = xk + d.first;
            int y = yk + d.second;
            st1.insert({x, y});

            x = xq + d.first;
            y = yq + d.second;
            st2.insert({x, y});
        }

        int ans = 0;
        // Attacking positions for queen
        for (auto pos : st1)
        {

            if (st2.find(pos) != st2.end())
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}