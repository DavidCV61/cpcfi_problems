#include <bits/stdc++.h>
 
using namespace std;
 
bool flag=false;
 
 
 
void dfs(int u,bool visitados[],int x,vector <int> Ladj[10000]){
 
 
    visitados[u]=true;
    for(int i=0;i<Ladj[u].size();i++){
 
 
        int nododestino=Ladj[u][i];
        if(nododestino==x){
 
        	flag=true;
        	
        }
 
        if(!visitados[nododestino]) dfs(nododestino,visitados,x,Ladj);
        
            }
}
 
 
int main(){
 
	int t;
	cin>>t;
	while(t--){
 
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	
	bool visitados[2*n+2]={};
	vector <int> Ladj[2*n+2];
 
 
 
 
for(int i=0;i<n-1;i++){
 
	if(s1[i+1]=='0'){
		Ladj[2*i+1].push_back(2*(i+1)+1);
		Ladj[2*i+2].push_back(2*(i+1)+1);
 
	}
	if(s2[i+1]=='0'){
	Ladj[2*i+1].push_back(2*(i+1)+2);
    Ladj[2*i+2].push_back(2*(i+1)+2);
 
 
	}
    
    
  
}
 
 
 
   dfs(1,visitados,2*n,Ladj);
   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
 
   flag=false;
 
	}
 
	
 
   
  
 
   
 
    return 0;
}
  
 
