#include <bits/stdc++.h>



using namespace std;




int main() {

  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

int n,m;

cin>>n>>m;

vector <int> a(n);
vector <long long> vacu1;
vector <long long> vacu2;


for(int i=0;i<n;i++){

  cin>>a[i];

}


int num1=a[0];
vacu1.push_back(0);

for(int i=1;i<n;i++){

  long long rest1=num1-a[i];
  num1=a[i];

  if(rest1>=0) vacu1.push_back(rest1+vacu1[i-1]);
  else vacu1.push_back(vacu1[i-1]);
}

int num2=a[n-1];
vacu2.push_back(0);

for(int i=n-2;i>=0;i--){

  long long rest2=num2-a[i];
  num2=a[i];

  if(rest2>=0) vacu2.push_back(vacu2[n-i-2]+rest2);
  else vacu2.push_back(vacu2[n-i-2]);

}


for(int i=0;i<m;i++){

int x,y;
cin>>x>>y;
if(y>x)cout<<vacu1[y-1]-vacu1[x-1]<<endl;
if(x>y)cout<<vacu2[n-y]-vacu2[n-x]<<endl;
if(x==y)cout<<"0"<<endl;




}




 return 0;


}
