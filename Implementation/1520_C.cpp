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
 
if(n==2) cout<<"-1"<<endl;
else{
	int k=0;
bool flag=true;
 
 
for(int i=0;i<n;i++){
 
	for(int j=0;j<n;j++){
		if(2*k+1>n*n && flag){
			flag=false;
			k=1;
		}
 
		if(flag) cout<<2*k+1<<" ";
		else cout<<2*k<<" ";
		k++;
		
 
 
 
 
	}
	cout<<endl;
}
 
}
 
 
  }
 
 
 
 
 
 
  
 
    return 0;
}
