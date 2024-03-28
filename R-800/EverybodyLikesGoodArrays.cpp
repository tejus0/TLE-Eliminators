#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,count=0;
        cin>>n;
        vector < int > v(n);
        for(int i = 0 ; i < n ;i++) {
            cin>>v[i];
        }
        for(int i = 0 ; i < n-1 ; i++) {
            count+=(v[i]%2 == v[i+1]%2);
        }
        cout<<count<<endl;
    }
    
    return 0;
}