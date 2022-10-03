#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
  int n,k;cin>>n>>k;
  int ar[n];
  for(int i=0;i<n;i++)cin>>ar[i];
  int start=0,end =0,maxi=0,sum=0;
  for(end;end<n;end++){
    sum+=ar[end];
    if(end>=k-1){
      maxi=max(maxi,sum);
      sum-=ar[start];
      start++;
    }
  }
  cout<<maxi<<endl;
	return 0;
}
