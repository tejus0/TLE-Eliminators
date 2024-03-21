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
        int xorall=0,maxi=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            xorall=xorall^arr[i];
            maxi=max(maxi,arr[i]);

        }

        if(n%2){
            cout<<xorall;
        }
        else{
            if(xorall==0){
                cout<<maxi;
            }
            else{
                cout<<-1;
            }
        }
        cout<<endl;
    }
    return 0;
}