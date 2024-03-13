#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int tests;
    cin>>tests;
    while(tests--){
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k==1){
        if(is_sorted(arr.begin(),arr.end())){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else cout<<"YES";
    cout<<endl;
    }
}