#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    cout<<max(a,max(b,max(c,d)))<<endl;
	}
	return 0;
}
