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
    int maxi = INT_MIN,sum=0;
    for(int left =1,right =1;right<=n;right++){
        sum+=ar[right];
        while(sum>m){
            sum-=ar[left];
            left++;
        }
        maxi= max(maxi,sum);
    }
    cout<<maxi<<endl;
	return 0;
}
