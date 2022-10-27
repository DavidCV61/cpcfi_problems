#include <bits/stdc++.h>

using namespace std;




int main(){
    std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){

int nodo,aristas;
cin>>nodo>>aristas;

vector<int> v(nodo);

for(int i=0;i<nodo;i++)cin>>v[i];



if(aristas<nodo || nodo==2) cout<<"-1"<<endl;
else{
    int sum=v[0]+v[nodo-1];

    for(int i=1;i<nodo;i++)sum=sum+v[i]+v[i-1];
        cout<<sum<<endl;
    for(int i=1;i<=aristas;i++){

        if(i==aristas)cout<<i<<" "<<1<<endl;
        else  cout<<i<<" "<<i+1<<endl;

        

       


    }
}

  }

 
    return 0;

}
