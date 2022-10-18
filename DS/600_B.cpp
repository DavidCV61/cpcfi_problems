#include <bits/stdc++.h>
 
 
 
using namespace std;
 
int bs(int N,int x,vector <int> v){
    
    int R=N-1;
    int L=0;
    int mid;
    while(L<=R){
     mid=L+(R-L)/2;
     if(v[mid]==x) {
 
      if(v[mid+1]==v[mid]){
 
        L=mid+1;
        continue;
 
       
      }else  return mid;
 
     }
 
    if(v[mid]<x) L=mid+1;
    else R=mid-1;
        
    }
    return R;
    
    
 
}
 
 
 
 
int main() {
 
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
 
 
int n,m;
cin>>n>>m;
vector <int> a(n);
vector <int> b(m);
 
 
 
 
for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];
 
 
 
 
 
  sort(a.begin(),a.end());
 
for(int i=0;i<m;i++){
 
  cout<<bs(n,b[i],a)+1<<" ";
 
 
 
}
 
cout<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
 
 
}
