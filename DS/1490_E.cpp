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
  int v[n];
  vector <int> a(n);
  map <int,bool> mp;
  for(int i=0;i<n;i++){
  	cin>>v[i];
  	a[i]=v[i];
 
  }
  	sort(v,v+n);
 
  	long long sum=v[0];
  	long long maxi=-1;
 
 
 
 
  	for(int i=1;i<n;i++){
 
  		if(sum<v[i]){
  			maxi=v[i-1];
 
  		}
  		sum=sum+v[i];
 
  	}
  	int limite=upper_bound(v,v+n,maxi)-v;
 
 
 
cout<<n-limite<<endl;
for(int i=0;i<n;i++){
 
	if(a[i]<=maxi) continue;
	else cout<<i+1<<" ";
 
 
}
cout<<endl;
 
  }
 
  
  
 
 
 
 
 
 
 
 
 
 
  
 
    return 0;
}
