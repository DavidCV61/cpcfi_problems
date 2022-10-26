#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main(){
    std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
int t;
cin>>t;
 
while(t--){
     int n;
  cin>>n; 
 
  vector <int> v(n+1);
  vector <int> acu(n+1);
 
 
 
 
  for(int i=1;i<=n;i++)cin>>v[i];
 
    int maxi=0;
 
 
for(int i=n;i>=0;i--){
    int sum=0;
 
  sum=i+v[i];
 
 
 
 if(sum>n){
 
    acu[i]=v[i];
 }
 
 else {
    acu[i]=v[i]+acu[sum];
}
 
 
 
}
 
for(int i=1;i<=n;i++) maxi=max(maxi,acu[i]);
cout<<maxi<<endl;
 
}
 
    return 0;
 
}
