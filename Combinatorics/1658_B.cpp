#include <bits/stdc++.h>
 
using namespace std;
long long modulo=998244353;
 
int main()
{
    
    int t;
    cin>>t;
    while(t--){
        
           int n;
   cin>>n;
   long long fac=1;
   
   if(n%2==0){
       
       for(int i=1;i<=n/2;i++){
       
     
     fac=((fac%modulo)*(i%modulo))%modulo;
       
   }
   
   
   
   cout<<((fac%modulo)*(fac%modulo))%modulo<<endl;
       
   }else cout<<"0"<<endl;
   
   
   
        
        
    }
 
    return 0;
}
