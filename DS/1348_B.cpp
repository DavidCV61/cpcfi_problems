#include <bits/stdc++.h>
 
using namespace std;

 
 
 
 
int main(){
    std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);


  int t;
  cin>>t;
  while(t--){


 int n,k;
 cin>>n>>k;
 map <int,int> mp;
 int maxi=0;
 vector <int> v;

 for(int i=0;i<n;i++){

    int aux;
    cin>>aux;
    
    if(mp[aux]==0){
         v.push_back(aux);
        mp[aux]++;
 
    }else{
        mp[aux]++;
         maxi=max(maxi,mp[aux]);   

    }
 }

 if(mp.size()>k) cout<<"-1"<<endl;
 else{
     for(int i=1;i<=n;i++){

        if(k==v.size()) break;
        else{

            if(mp[i]==0)v.push_back(i);
            else continue;
        }
    }
cout<<(n*v.size())<<endl;
for(int j=0;j<n;j++){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";

}
cout<<endl;

 }
  

  }
 

 
 
 
 
 
 
 
    return 0;
 
}
