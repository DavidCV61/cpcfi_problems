#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
  int n,k;
  cin>>n>>k;
  vector <int> v(n);
 
  for(int i=0;i<n;i++)cin>>v[i];
 
  int aux=v[0];
int ct=0;
 
 
 
	for(int i=1;i<n;i++){
 
		int sum=aux+v[i];
 
 
		if(sum<k){
 
			int r=k-sum;
			ct=ct+r;
			
			
				v[i]=v[i]+r;
			
 
		}
 
		aux=v[i];
 
 
 
 
	}
cout<<ct<<endl;
for(int i=0;i<n;i++)cout<<v[i]<<" ";
	cout<<endl;
 
 
 
 
 
 
return 0;
}
 
 
