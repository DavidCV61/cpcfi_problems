#include <bits/stdc++.h>
 
using namespace std;
 
int bs(int N,int x,int x0,long long v[]){
    
    int R=N-1;
    int L=x0;
    int mid;
    while(L<=R){
     mid=L+(R-L)/2;
    
     if(v[mid]+x>0) {
        if(v[mid-1]+x>0 && mid>=1 && x<v[mid-1])R=mid-1;
        else return mid;
   }
    if(v[mid]+x<=0) L=mid+1;
 
    
        
    }
    return -1;
    
    
 
}
 
 
int main(){
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
 
  int n;
  cin>>n;
  vector <int> a(n);
  vector <int> b(n);
 
  for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
 
    long long  v[n];
    for(int i=0;i<n;i++) v[i]=a[i]-b[i];
 
        sort(v,v+n);


 
 
long long sum=0;
int comp;
    for(int i=0;i<n-1;i++){

    	if(v[i]>0){

    		sum=sum+n-i-1;
    	




    	}else{

       comp=bs(n,v[i],i+1,v);
       if(comp==-1) continue;



  		 sum=sum+n-comp;


    	}
 
      
    
    }
 
 
 
    cout<<sum<<endl;
    
 
 
 
    return 0;
}
