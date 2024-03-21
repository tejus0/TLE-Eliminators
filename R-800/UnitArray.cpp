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
int minusone=0,ones=0;
for(int i=0;i<n;i++){
cin>>arr[i];
if(arr[i]==-1){
    minusone++;
}
else{
    ones++;
}
}
if(minusone<=ones){
    if(minusone&1){
        cout<<1;
    }
    else{
        cout<<0;
    }
}
else{
    int ops= minusone-n/2;
    if((n/2)&1){
        ops++;
    }
    cout<<ops;
}
cout<<endl;

}    
    return 0;
}