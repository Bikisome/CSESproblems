#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<char>arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<char,int>mp;
    for(int i = 0; i<n; i++){
        mp[arr[i]]++;
    }
  int cnt  = 0;
    for(auto it:mp){
        if(it.second >1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}