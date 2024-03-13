#include <bits/stdc++.h>
using namespace std;

int main()
{
     int test;
     cin>>test;
    while(test--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            if(a>b){
                cout<<"First";
            }
            else{
                cout<<"Second";
            }
        }
        else{
            if(b>a){
                cout<<"Second";
            }
            else{
                cout<<"First";
            }
        }
    cout<<endl;
}    
    return 0;
}