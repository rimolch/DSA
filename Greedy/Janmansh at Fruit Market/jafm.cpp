#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
      vector<int>ar(3);
      int x;
      cin>>x;
      for(int i=0;i<3;i++){
		cin>>ar[i];
      }
      sort(ar.begin(),ar.end());
      /*
      To have the minimum price for buying X fruits having at least 2 different kinds of fruits, 
      we can buy (X-1) fruits with cost A and 1 fruit with cost B.
       Thus, the answer is (X-1)*A + B (where A≤B≤C).
     */
      cout<<(x-1)*ar[0]+ar[1]<<endl;
	}
	return 0;
}
