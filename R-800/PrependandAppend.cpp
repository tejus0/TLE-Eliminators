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
        string str;
        cin >> str;
        int N = n;
        int s = 0, e = n - 1;
        while (s < e)
        {
            if ((str[s] != str[e]))
            {
                s++;
                e--;
                N -= 2;
            }
            else
            {
                break;
            }
        }
        cout << N << endl;
    }
    return 0;
}