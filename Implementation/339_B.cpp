#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
int n,m;
cin>>n>>m;
int aux=1;
long long sum=0;
 
 
for(int i=0;i<m;i++){
 
 
	int x;
	cin>>x;
	if(x<=n && aux<=x){
 
		sum=sum+x-aux;
	}else
{
	sum=sum+x-aux+n;
}
aux=x;
 
 
}
 
cout<<sum<<endl;
 
 
 
 
 
 
 
 
  
 
    return 0;
}
