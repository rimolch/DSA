#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
      int n;
      cin>>n;
      vector<int>ar(n);
      map<int,int>mp;
      for(int i=0;i<n;i++){
	      	cin>>ar[i];
		      mp[ar[i]]++;
      }
      int maxi=0;
      for(auto it:mp){
		    if(it.second==n){
			    cout<<"0"<<endl;
			     break;
	    	}
		  else{
			    maxi=max(maxi,it.second);
		    }
	   }
	  if(maxi==1)cout<<n-1<<endl;
	  else if(maxi>1)cout<<n-maxi<<endl;
	}
	return 0;
}
