#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
int a,b;
cin>>a>>b;
int sum=a;
while(a>=b){
 
	int aux=a%b;
 
 
	a=a/b;
 
	sum=sum+a;
	a=a+aux;
 
 
 
}
 
cout<<sum<<endl;
 
 
 
 
 
  
 
    return 0;
}
