#include<bits/stdc++.h>
using namespace std;
#define ll long long

int  main(){


	int n,a,b;
	cin>>n>>a>>b;

	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

		int ans = a+b;
		for(int i=0;i<n;i++){
		if(v[i]==ans){
			cout<<i+1;break;
		}
	}

		


  return 0;

}