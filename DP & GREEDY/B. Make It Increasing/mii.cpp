#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	int ar[50];

	cin>>t;
	while(t--)
    {
		int n;
		cin>>n;
         int a[31];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int ans=0;
		for(int i=n-1;i>=1;i--)
		{
			if(a[i+1]==0)
            {
				ans=-1;
                break;
			}
			while(a[i]>=a[i+1])
            {
                a[i]/=2;
                ans++;
            }
		}
		cout<<ans<<endl;
	}
	return 0;
}
