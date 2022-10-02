#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    ll n,m;
    cin>>n>>m;
    ll ar[n+1];
    for(int i = 1;i <=n; i++){
       cin>>ar[i];
    }
    long long k = 0, c= 0;
    for(int l= 1,r= 1; r <=n; r++)
    {
        c+=ar[r];
        while(c>m)
        {
            c-=ar[l++];
        }
       k = max(k,c);
    }
    cout<<k<<endl;
	return 0;
}
