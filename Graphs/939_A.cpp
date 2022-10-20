#include <bits/stdc++.h>

using namespace std;


int main(){
int n;
cin>>n;


int nodos,aristas;
nodos=n;
aristas=n;

vector <int> Ladj[nodos+1];

for(int i=0;i<aristas;i++){
    int u;

    cin>>u;
    Ladj[i+1].push_back(u);
}

bool flag=false;
for(int i=1;i<=nodos;i++){
   

    for(int j=0;j<Ladj[i].size();j++){

        for(int k=0;k<Ladj[Ladj[i][j]].size();k++){

            for(int l=0;l<Ladj[Ladj[Ladj[i][j]][k]].size();l++){

                
                if(Ladj[Ladj[Ladj[i][j]][k]][l]==i){

                    flag=1;
                    break;


                }


          



        }
    }

}
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


    return 0;
}
