#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
 int n;
 cin>>n;
 vector<int>arr(n);
 for(int i = 0; i<n; i++){
  cin>>arr[i];
 }
 int ans = 0;
 sort(arr.begin(),arr.end());
for(int i = 0; i<n; i++){
  if(abs(arr[i]-arr[i-1])!=1){
    ans= arr[i-1]+1;
  }
}
cout<<ans<<endl;
}
