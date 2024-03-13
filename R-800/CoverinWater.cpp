#include <bits/stdc++.h>
using namespace std;

int main()
{
     int test;
     cin>>test;
    while(test--){
        int n;
        cin>>n;
        string str;
        int freq=0;
        cin>>str;
        int i;
        for(i=0;i<n;i++){
            if(str[i]=='.')freq++;
            if(i>0 and i<n-1){
            if(str[i]=='.' and str[i-1]=='.' and str[i+1]=='.'){
                cout<<2<<endl;
                break;
            }
            }
        }
        if(i==n){
            cout<<freq<<endl;
        }
}    
    return 0;
}