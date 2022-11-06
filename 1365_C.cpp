#include <bits/stdc++.h>
 
using namespace std;

 
 
 
 
int main(){
    std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

int n;
cin>>n;

map <int,int> mp;
vector <int> b(n);
vector <int> r(n);

for(int i=1;i<=n;i++){

    int aux;
    cin>>aux;
    mp[aux]=i;
}
for(int i=0;i<n;i++) cin>>b[i];


for(int i=0;i<n;i++){
    int res=mp[b[i]]-(i+1);
    if(res<0)r[i]=res+n;
    else r[i]=res;

}

map <int,int> p;
int maxi=0;
for(int i=0;i<n;i++){

    p[r[i]]++;
    maxi=max(p[r[i]],maxi);

} 


cout<<maxi<<endl;
 
 
 
 
 
 
 
    return 0;
 
}
