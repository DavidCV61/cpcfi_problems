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
  int comp=n/2;
 
 
 
  	map <int,int> mp;
  for(int i=0;i<n;i++){
  	int a;
  	cin>>a;
	mp[a]++;
 
  }
 
int r;
int m;
bool flag=false;
 
 
for(map<int,int>::iterator it=mp.begin();it != mp.end();it++){ 
  
     if(it->second>comp){
 
     	r=it->second;
     	m=r-(n-r);
     	flag=true;
     }
 
 
    }
 
    if(flag){
 
    	cout<<m<<endl;
    }else{
 
 
    	if(n%2==0) cout<<"0"<<endl;
    	else cout<<"1"<<endl;
    }
 
  
 
  }
  
 
    return 0;
}
