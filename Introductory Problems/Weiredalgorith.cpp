#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
  int n;
  cin>>n;
  vector<int>arr;
  arr.push_back(n);
  int a = 0;
  while(n!=1){
    if(n%2!=0){
      n = n*3+1;
      arr.push_back(n);
    }
    else{
      n=n/2;
      arr.push_back(n);
    }
  }
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
 return 0;
}