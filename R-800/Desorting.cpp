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
        int min_diff = INT_MAX,i;
        for ( i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                // cout <<C 0;
                break;
            }
            min_diff = min(min_diff, 1+((arr[i + 1] - arr[i]) / 2));
        }
        i!=n-1 ? cout<<0 : cout << min_diff ;
        cout<< endl;
    }
    return 0;
}