#include <bits/stdc++.h>

using namespace std;

int main(){
	

  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
	int n,s;
	cin>>n>>s;

	vector<int> a(n);
	vector<int> b(n);

	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];


	bool flag=false;

if(!a[0]){}
else{
		if(a[s-1]){

		flag=true;

	}else{


		for(int i=s-1;i<n;i++){

			if(a[i] && b[i]){

				if(b[s-1]){
					flag=true;
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
