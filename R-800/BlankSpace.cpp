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
        int temp = 0, maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                // v.push_back(-1);
                temp = 0;
            }
            else
            {
                temp++;
                // v.push_back(temp);
                maxi = max(temp, maxi);
            }
        }
        cout << maxi << endl;
    }
    return 0;
}