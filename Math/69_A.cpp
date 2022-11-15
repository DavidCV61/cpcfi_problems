#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
	
	int n;
	cin>>n;
	long long sumx=0;
	long long sumy=0;
	long long sumz=0;
	for(int i=0;i<n;i++){
		int x,y,z;
 
		cin>>x>>y>>z;
 
		sumx=sumx+x;
		sumy=sumy+y;
		sumz=sumz+z;
	}
 
	if(sumx==0 && sumy==0 && sumz==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
 
 
   
 
    return 0;
}
  
 
