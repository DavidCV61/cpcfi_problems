#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
  int n,m;
 
 cin>>n>>m;
 
 vector <int> v(n);
  vector <int> a(n);
 
 for(int i=0;i<n;i++)cin>>v[i];
 
 for(int i=0; i<n;i++){
	
	if(v[i]%m==0)a[n-i-1]=v[i]/m;
	else a[n-i-1]=(v[i]/m)+1;
 }
int max=0;
int pos;
 for(int i=0;i<n;i++){
 
 	if(a[i]>max){
 
 		max=a[i];
 		pos=n-i;
 	}
 }
 
 cout<<pos<<endl;
 
 
return 0;
}
 
 
 
