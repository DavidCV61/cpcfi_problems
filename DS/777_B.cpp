#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main(){
    std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
  long long n;
  
  cin>>n;
 
 string vs,vm;
 cin>>vs>>vm;
 
 
 
 
  
 
 
 
    sort(vs.rbegin(),vs.rend());
    sort(vm.rbegin(),vm.rend());
 
 
 
 
        long long tp=0;
    long long ct=0;
 
    for(long long i=0;i<n;i++){
 
 
 
        for(long long j=tp;j<n;j++){
           
 
            if(vm[i]>vs[j]){
                
 
 
 
               
                ct++;
                tp=j+1;
                break;
 
 
            }
 
 
 
        }
 
 
    }
 
 
long long ct2=0;
long long tp2=0;
   for(long long i=0;i<n;i++){
 
        for(long long j=tp2;j<n;j++){
 
            if(vm[i]>=vs[j]){
               
                ct2++;
                tp2=j+1;
                break;
 
 
            }
 
 
 
        }
 
 
    }
 
 
 
 
 
cout<<n-ct2<<endl<<ct<<endl;
 
 
 
 
 
 
    return 0;
 
}
