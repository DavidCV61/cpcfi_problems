#include <bits/stdc++.h>
 
using namespace std;
vector<int> Grafo[2005];
int visitado [2005];
int maxi=0;
 
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
 
            if(visitado[v] == -1) {
 
                q.push(v);
                visitado[v]=visitado[u]+1;
                  maxi=max(visitado[v],maxi);
 
            }
             
 
 
            
 
            
          
 
 
        }
 
 
 
 
    }
 
 
 
 
}
 
 
int main(){
 
 
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
  int n;
  cin>>n;
 
  for(int i=1;i<=n;i++){
 
    int x;
    cin>>x;
 
    if(x==-1)continue;
    else Grafo[i].push_back(x);
  }
 
 
  
    
 
 
    for(int i=1;i<=n;i++){
 
        for(int j=1;j<=n;j++)visitado[j]=-1;
            bfs(i);
      
 
        
    }
    
 
    
    cout<<maxi+1<<endl;
 
   
 
 
 
  
 
 
    return 0;
}
