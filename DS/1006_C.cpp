#include <bits/stdc++.h>

using namespace std;
 vector <long long> vacu1;
 vector <long long> vacu2;

long long bs(long long N,long long x){
    
    long long R=N;
    long long L=1;
    long long mid;
    while(L<=R){
     mid=L+(R-L)/2;
     if(vacu2[mid]==x) return mid;

    if(vacu2[mid]<x) L=mid+1;
    else R=mid-1;
        
    }
    return -1;
    
    
 
}

int main(){
	

  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  long long n;
  cin>>n;
  vector <long long> v(n);

  for(int i=0;i<n;i++){

  	cin>>v[i];
  }


  vacu1.push_back(0);
    vacu2.push_back(0);

  for(long long i=0;i<n;i++)vacu1.push_back(vacu1[i]+v[i]);
  for(long long i=0;i<n;i++)vacu2.push_back(vacu2[i]+v[n-1-i]);


  	for(long long i=0;i<vacu1.size();i++) cout<<vacu1[i]<<" ";
  		cout<<endl<<endl;
  	for(long long i=0;i<vacu2.size();i++) cout<<vacu2[i]<<" ";
  		cout<<endl;

  	
 

  		long long mayor=0;

  	for(long long i=1;i<n;i++){

  		long long comp=bs(vacu2.size()-1-i,vacu1[i]);
  		
  		if(comp!=-1) mayor=max(mayor,vacu1[i]);

  	}

  	cout<<mayor<<endl;



  



    return 0;
}
