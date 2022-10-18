#include <bits/stdc++.h>
 
 
 
using namespace std;
 

 
 
 
 
int main() {
 
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
 
 
 
int n,k;
int ct=0;

cin>>n>>k;


stack <int> p;
queue <int> q;
map <int,bool> mp;





for(int i=0;i<n;i++){

  int x;
  cin>>x;




  if(p.size()<k){

    if(mp[x]){}
    else {p.push(x);
      q.push(x);
      mp[x]=true;
      ct++;
   
    }
    
  }else{

   if(mp[x]){}
    else{

      mp[q.front()]=false;
      mp[x]=true;

      
      p.push(x);
      q.push(x);
      q.pop();
    }
    
  }

}
cout<<ct<<endl;
 
  
int i=0;
 while(!p.empty() && k>i){

  cout<<p.top()<<" ";
  p.pop();
  i++;


 }

 cout<<endl;



 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
 
 
}
