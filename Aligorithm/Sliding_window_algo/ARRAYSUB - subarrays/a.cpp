#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int>ar(n);
  for(int i=0;i<n;i++){
    cin>>ar[i];
  }
  int k,maxi;
  cin>>k;
  for(int i=0;i<=n-k;i++){
    maxi=ar[i];
    for(int j=i;j<k+i;j++){
      maxi=max(ar[j],maxi);
    }
    cout<<maxi<<" ";
  }
	return 0;
}
