#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
 
   int n,t;
   cin>>n>>t;
 
   if(t==2){
   		if(n==1)cout<<"2"<<endl;
   	else{
   			cout<<"1";
   	for(int i=0;i<n-2;i++)cout<<"0";
   		cout<<"2"<<endl;
 
   	}
 
   }
   if(t==3){
   		if(n==1)cout<<"3"<<endl;
   	else{
   			cout<<"1";
   	for(int i=0;i<n-2;i++)cout<<"0";
   		cout<<"2"<<endl;
   	}
 
   }
   if(t==4){
   	if(n==1)cout<<"4"<<endl;
   	else{
   		for(int i=0;i<n-2;i++)cout<<"4";
   		cout<<"16"<<endl;
   	
 
   	}
   }
   if(t==5){
   	if(n==1)cout<<"5"<<endl;
   	else{
   		for(int i=0;i<n-1;i++)cout<<"4";
   		cout<<"5"<<endl;
   	}
 
   }
   if(t==6){
   	if(n==1)cout<<"6"<<endl;
   	else{
   			cout<<"1";
   	for(int i=0;i<n-2;i++)cout<<"0";
   		cout<<"2"<<endl;
   	}
 
   }
 
   if(t==7){
   	if(n==1)cout<<"7"<<endl;
   	else if(n==2)cout<<"14"<<endl;
   	else if(n==3)cout<<"805"<<endl;
   	else{
 
   		for(int i=0;i<n-3;i++)cout<<"7";
   			cout<<"105"<<endl;
   	}
 
 
   }
   if(t==8){
   	if(n==1)cout<<"4"<<endl;
   	else if(n==2)cout<<"16"<<endl;
   	else if(n==3)cout<<"888"<<endl;
   	else{
   		for(int i=0;i<n-3;i++)cout<<"4";
   		cout<<"008"<<endl;
   	
   	}
   }
   if(t==9){
   	if(n==1)cout<<"9"<<endl;
   	else{
   			cout<<"1";
   	for(int i=0;i<n-2;i++)cout<<"0";
   		cout<<"8"<<endl;
   	}
 
   }
   if(t==10){
   	if(n==1)cout<<"-1"<<endl;
   	else{
   			cout<<"6";
   	for(int i=0;i<n-1;i++)cout<<"0";
   		
   	}
 
   }
   
    
  
 
 
    return 0;
}
