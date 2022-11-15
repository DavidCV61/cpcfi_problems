#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
  int t;
  cin>>t;
  while(t--){
 
  	int n,m;
 cin>>n;
 vector <int> r(n);
 for(int i=0;i<n;i++)cin>>r[i];
 	cin>>m;
  vector <int> b(m);
 for(int i=0;i<m;i++)cin>>b[i];
 
 	vector <int> acu1;
 	vector <int> acu2;
 
 	int maxi=0;
 maxi=max(maxi,r[0]);
  maxi=max(maxi,b[0]);
 
 
acu1.push_back(r[0]);
  for(int i=1;i<n;i++){
 
  	acu1.push_back(acu1[i-1]+r[i]);
  }
  acu2.push_back(b[0]);
  for(int i=1;i<m;i++){
 
  	acu2.push_back(acu2[i-1]+b[i]);
  }
 
  sort(acu2.rbegin(),acu2.rend());
   sort(acu1.rbegin(),acu1.rend());
 
    maxi=max(maxi,acu1[0]);
  maxi=max(maxi,acu2[0]);
 
 
cout<<max(maxi,acu2[0]+acu1[0])<<endl;
  }
 
 
 
 
 
 
 
 
 
return 0;
}
 
 
 
