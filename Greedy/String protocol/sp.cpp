#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int c=0;
     for(int i=0;i<n;i++){
		if(s[i]!=s[i+1]){
			c++;
		}
		else{
			c++;
	        i++;
		}
     }
     cout<<c<<endl;
	}
	return 0;
}
