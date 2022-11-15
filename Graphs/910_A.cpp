
  #include <bits/stdc++.h>
 
using namespace std;
vector<int> Grafo[100];
int visitado [100];
 
void bfs(int nodo){
    int u,v;
 
    queue <int> q;
 
    q.push(nodo);
    visitado[nodo]=0;
 
 
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<Grafo[u].size();i++){
 
            v=Grafo[u][i];
 
            if(visitado[v] == 1000){
                q.push(v);
             
                
 
            }
               visitado[v]=min(visitado[u]+1,visitado[v]);
 
 
 
 
        }
 
 
 
 
    }
 
 
 
 
}
 
 
int main(){
 
	std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
 
    
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
 
 
    for(int i=0;i<n;i++){
 
    	if(s[i]=='1'){
 
    		for(int j=i+1;j<=i+d;j++){
    		if(s[j]=='1') Grafo[i+1].push_back(j+1);
 
 
    	}
 
    	}
 
    	
    }
 
 
 
 
 
 
    for(int i=1;i<=n;i++){
 
        visitado[i]=1000;
}
 
    
 
    bfs(1);
 
 
 
if(visitado[n]==1000)cout<<"-1"<<endl;
	else cout<<visitado[n]<<endl;
 
 
    return 0;
}
