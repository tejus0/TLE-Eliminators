#include <bits/stdc++.h>
using namespace std;

int main()
{
     int test;
     cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==1){
            cout<<"YES";
        }
        else
            cout<<"NO";
        cout<<endl;
}    
    return 0;
}