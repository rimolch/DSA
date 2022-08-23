// beginner
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		ll p;
	    int ar[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	    cin>>p;
	    int ans =0,c=0;
	    for(int i=11;i>=0;i--){
		  c=p/ar[i];
		  ans+=c;
		  p%=ar[i];
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
