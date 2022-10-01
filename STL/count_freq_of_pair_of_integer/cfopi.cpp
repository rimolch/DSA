#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    int n;
    cin>>n;
    map<pair<int,int>,int>mp;
    int ans =0;
    while(n--){
		int a,b;
		cin>>a>>b;
		mp[{a,b}]++;
		ans=max(ans,mp[{a,b}]);
    }
    cout<<ans<<endl;
	return 0;
}
