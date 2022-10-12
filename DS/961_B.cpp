#include <bits/stdc++.h>



using namespace std;




int main() {

  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

int n,k;
cin>>n>>k;
vector <int> vacu;
vector <int> t(n);
vector <int> s(n);




for(int i=0;i<n;i++) cin>>t[i];

for(int i=0;i<n;i++) cin>>s[i];

  vacu.push_back(0);
  int suma=0;

  for(int i=0;i<n;i++){
int aux=0;
    if(s[i]){
      suma=t[i]+suma;
      aux=0;
    }else{
      aux=t[i];
    }

    vacu.push_back(vacu[i]+aux);

  }


  int maxi=0;


  for(int i=0;i<vacu.size()-k;i++){

    int num=vacu[i+k]-vacu[i]+suma;

    maxi=max(maxi,num);


  }

  cout<<maxi<<endl;







 return 0;


}
