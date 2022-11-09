#include <bits/stdc++.h>
 
using namespace std;

 
 
 
 
int main(){
    std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n,q;
  cin>>n;

  map <int,int> mp;


  for(int i=0;i<n;i++){
    int aux;
    cin>>aux;
    mp[aux]++;

  }
  cin>>q;

  int flagCuad=0;
  int flagRect=0;


  for(map<int,int>::iterator it=mp.begin();it != mp.end();it++){

    if(it->second>=4){
        flagCuad=flagCuad+it->second/4;
        int x;
        x=it->second%4;
        flagRect=flagRect+(x)/2;

    }else{

        flagRect=flagRect+(it->second)/2;

    }

}


int aux;

for(int i=0;i<q;i++){


    char c;
    
    cin>>c>>aux;

    if(c=='+'){

        mp[aux]++;

        if(mp[aux]>=4){




            flagCuad=flagCuad-(mp[aux]-1)/4;
            flagRect=flagRect-((mp[aux]-1)%4)/2;
            flagCuad=flagCuad+(mp[aux])/4;
            flagRect=flagRect+((mp[aux])%4)/2;
            

          

        }else{
            

             flagRect=flagRect+((mp[aux])/2)-((mp[aux]-1)/2);


        }


    }else{



      
        mp[aux]--;


      
            
            

          


            flagCuad=flagCuad-(mp[aux]+1)/4;
            flagRect=flagRect-((mp[aux]+1)%4)/2;
            flagCuad=flagCuad+(mp[aux])/4;
            flagRect=flagRect+((mp[aux])%4)/2;
            
    


        



    }


    if(flagCuad>=2) cout<<"YES"<<endl;
    else if(flagCuad>=1 && flagRect>=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

 
 
 
 
 
 
 
    return 0;
 
}
