#include <bits/stdc++.h>



using namespace std;




int main() {

  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);


  map <string,int> mp;


int n;
cin>>n;


  for(int i=0;i<n;i++){

    string s;
    cin>>s;
    if(mp[s]==0)cout<<"OK"<<endl;
    else cout<<s<<mp[s]<<endl;

    mp[s]++;

  }












 return 0;


}
