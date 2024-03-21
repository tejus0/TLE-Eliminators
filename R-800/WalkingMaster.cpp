#include <bits/stdc++.h>
using namespace std;

int main()
{
     int test;
     cin>>test;
    while(test--){
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 if(b>d){
    cout<<-1;
 }
 else {
    if(a+d-b<c){
        cout<<-1;
    }
    else{
        cout<<2*(d-b)+a-c;
    }
 }
 cout<<endl;

}    
    return 0;
}