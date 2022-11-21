#include <bits/stdc++.h>

using namespace std;


int main(){


  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
int r,c;
cin>>r>>c;

vector <string> m(r);


for(int i=0;i<r;i++){
    cin>>m[i];
  

}

    

    bool flag=true;


for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){

        if(m[i][j]=='S'){
            if(i>=1){

                if(m[i-1][j]=='W'){
                    flag=false;
                    break;

                }else if(m[i-1][j]=='.'){

                    m[i-1][j]='D';
                }
            }
             if(i<r-1){

                if(m[i+1][j]=='W'){
                    flag=false;
                    break;
                    
                }else if(m[i+1][j]=='.'){

                    m[i+1][j]='D';
                }
            }
             if(j>=1){

                if(m[i][j-1]=='W'){
                    flag=false;
                    break;
                    
                }else if(m[i][j-1]=='.'){

                    m[i][j-1]='D';
                }
            }
             if(j<c-1){

                if(m[i][j+1]=='W'){
                    flag=false;
                    break;
                    
                }else if(m[i][j+1]=='.'){

                    m[i][j+1]='D';
                }
            }

            


        }



    }
    if(flag) continue;
    else break;

      


}




    if(flag) {

        cout<<"YES"<<endl;
        for(int i=0;i<r;i++)cout<<m[i]<<endl;

    }
    else{
        cout<<"NO"<<endl;
        

    } 

   



  


    return 0;
}
