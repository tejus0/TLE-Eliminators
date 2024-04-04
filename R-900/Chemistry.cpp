#include <bits/stdc++.h>
using namespace std;

bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> mp;
        for (auto ch : s)
            mp[ch]++;

        int odds = 0;
        for (auto it : mp)
        {
            int freq = it.second;

            if (odd(freq))
                odds++;
        }

        if (k < odds - 1)
            cout << "No";
        else
            cout << "Yes";
        cout << endl;
    }
    return 0;
}