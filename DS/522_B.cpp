#include <bits/stdc++.h>



using namespace std;




int main() {

  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

int n;
cin>>n;
vector <int> vx(n);
vector <int> vy(n);
priority_queue <int> pq;
int suma=0;


for(int i=0;i<n;i++){

  cin>>vx[i]>>vy[i];
  pq.push(vy[i]);
  suma=suma+vx[i];
}
int maxi=pq.top();
int maxiT;
for(int i=0;i<n;i++){

  
  
  if(maxi==vy[i]){

    pq.pop();
    maxiT=pq.top();
    pq.push(maxi);

    


  }else maxiT=maxi;
cout<<(suma-vx[i])*maxiT<<" ";

}

cout<<endl;







 return 0;


}
