#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
 
    int lucky[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
 
    int n;
    cin>>n;
    bool flag=false;
 
    for(int i=0;i<14;i++){
 
    	if(n%lucky[i]==0){
    		flag=true;
    		break;
    	}
 
 
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    
  
 
 
    return 0;
}
