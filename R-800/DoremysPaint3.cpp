#include <bits/stdc++.h>
using namespace std;

int main(){
     int test;
     cin>>test;
    while(test--){
        int n;
        cin>>n;
        int x;
        map<int,int> mp;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }
        if(mp.size()==1){
            cout<<"YES";
        }
        else if (mp.size()>=3){
            cout<<"NO";
        }
        else{
            // auto it=mp.begin();
            for(auto it:mp){
                // cout<<it.second<<" ";
                v.push_back(it.second);
            }
            int first=v[0];
            // cout<<first;

            int second=v[1];
            // cout<<second;
            if(abs(second-first)>=2)    cout<<"NO";
            else cout<<"YES";
        }
    cout<<endl;
}    
    return 0;
}