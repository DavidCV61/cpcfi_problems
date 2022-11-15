#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
  int t;
  cin>>t;
  while(t--){
 
  	int n,m,x,y;
 cin>>n>>m>>x>>y;
 
 int ct1=0;
 int ct2=0;
 
 string s;
 
 
 for(int i=0;i<n;i++){
 
 	cin>>s;
 	int ct=0;
 	
 
 	for(int j=0;j<=m;j++){
 
 		if(s[j]=='*' || j==m){
 
 			if(ct==2){
 
 				ct2++;
 
 			}
 			if(ct==1){
 				ct1++;
 			}
 
 			ct=0;
 
 		}
 		
 
 		if(s[j]=='.') ct++;
 
 		if(ct==2){
 
 			ct2++;
 			ct=0;
 		}
 	}
 }
 
 
 
 cout<<min(ct1*x+ct2*y,ct1*x+2*ct2*x)<<endl;
 
  }
 
 
 
 
 
  
 
    return 0;
}
