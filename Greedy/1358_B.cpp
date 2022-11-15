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
  vector <int> v(n);
 
  for(int i=0;i<n;i++)cin>>v[i];
  	 
 
  	sort(v.begin(),v.end());
 
  for(int i=0;i<=n;i++){
  	if(i==n){
 
  		cout<<"1"<<endl;
  		break;
 
  	}
 
  	if(v[n-i-1]>n-i) continue;
  	else{
 
  		cout<<n-i+1<<endl;
  		break;
  	}
 
 
  }
 
  }
 
 
 
 
 
 
return 0;
}
 
 
 
 
 
 	
