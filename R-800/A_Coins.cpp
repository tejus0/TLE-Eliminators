#include <bits/stdc++.h>
using namespace std;

int main()
{
     int test;
     cin>>test;
    while(test--){
long long int n, k;
        cin >> n >> k;
        if (n % 2 && k % 2 == 0) cout << "NO" << '\n';
        else cout << "YES" << '\n';

}    
    return 0;
}