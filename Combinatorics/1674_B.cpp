#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
	
	
	
 
 
	char vocal[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	map <string,int> mp;
 
	
		int ct=1;
 
		for(int i=0;i<26;i++){
 
			for(int j=0;j<26;j++){
				string s="";
 
				
				if(vocal[i]==vocal[j])continue;
				s=s+vocal[i];
				s=s+vocal[j];
				mp[s]=ct;
				ct++;
 
 
			}
 
		}
 
	int t;
	cin>>t;
 
	while(t--){
 
		string z;
		cin>>z;
		cout<<mp[z]<<endl;;
	}
 
 
   
 
    return 0;
}
  
