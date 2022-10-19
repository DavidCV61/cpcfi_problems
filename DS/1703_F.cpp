#include <bits/stdc++.h>

using namespace std;

int main(){
	

  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
int t;
cin>>t;

while(t--){

	int n;
  cin>>n;
  vector <int> v(n);
  vector <pair<int,int>> pair;
  for(int i=0;i<n;i++)cin>>v[i];


  	for(int i=0;i<n;i++){

  		if(i+1>v[i]){

  			pair.push_back({v[i],i+1});
  		}

  	}
sort(pair.begin(),pair.end());
int k=pair.size();

int bs[k];

for(int i=0;i<k;i++){

	bs[i]=pair[i].first;
}



long long ct=0;

for(int i=0;i<k;i++){

	int s= upper_bound(bs, bs+k,pair[i].second) - bs;
	
	ct=ct+k-s;
	


}

cout<<ct<<endl;



}

  




  



    return 0;
}
