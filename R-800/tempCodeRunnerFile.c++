#include <bits/stdc++.h>
using namespace std;

int main()
{
     int test;
     cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        string s,x;
        cin>>x>>s;
        int count=0;
        int opr;
        for(opr=0;opr<=5;opr++){
            if(x.find(s)!=string::npos){
                cout<<opr;
                break;
            }
            x.append(x);
        }
    if(opr==6){
        cout<<-1;
    }
    cout<<endl;
}    
    return 0;
}