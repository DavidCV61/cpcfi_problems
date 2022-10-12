#include <bits/stdc++.h>



using namespace std;




int main() {

  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

int n,m;

cin>>n>>m;
vector<int> a(n);
vector<int> v;

for(int i=0;i<n;i++){

  cin>>a[i];
}

int ct=0;
map<int,bool> mp;
for(int i=n-1;i>=0;i--){

  if(!mp[a[i]]){

    mp[a[i]]=true;
    ct++;
  }

  v.push_back(ct);
}


for(int i=0;i<m;i++){

  int x;
  cin>>x;

  cout<<v[n-x]<<endl;

}

 return 0;


}
