#include <bits/stdc++.h>

using namespace std;




int main(){
    std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n;
  cin>>n;

 map <int,int> mp;
  vector <int> b(n);

  vector <int> a(n);
  int ct=0;
 
  
    for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

            int pos=0;

            for(int i=0;i<n;i++){



                if(mp[a[i]]) {
                    continue;}
                else{

                      for(int j=pos;j<n;j++){

                      
                    mp[b[j]]++;

                    if(a[i]==b[j]){
                        pos=j+1;

                     break;}
                    else ct++;




                }


                }

              



            }

  
     
      
cout<<ct<<endl;






 
    return 0;

}
