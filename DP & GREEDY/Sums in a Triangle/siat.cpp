#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        int ar[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cin>>ar[i][j];
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                ar[i][j]+=max(ar[i+1][j],ar[i+1][j+1]);
            }
        }
        cout<<ar[0][0]<<"\n";
    }
	return 0;
}
