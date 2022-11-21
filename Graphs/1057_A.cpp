#include <bits/stdc++.h>

using namespace std;


int main(){


  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vector <int> v(n);
  n=n-1;
  for(int i=0;i<n;i++)cin>>v[i];

    stack <int> p;

   int aux=n+1;

   while(aux!=1){
    p.push(aux);
    aux=v[aux-2];


   }
   p.push(aux);

   while(!p.empty()){
    cout<<p.top()<<" ";
    p.pop();
   }
cout<<endl;


    return 0;
}
