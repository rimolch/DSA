#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
      ll n,x,c=0;
      cin>>n>>x;
      vector<ll>ar(n);
      for(ll i=0;i<n;i++){
		cin>>ar[i];
		if(ar[i]<x){
			c =i+1;
		}
      }
      cout<<c<<endl;
	}
	return 0;
}
