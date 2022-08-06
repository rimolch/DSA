//sliding window algorithm
#include<bits/stdc++.h>
#define checkmate return 0
#define endl '\n'
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;//4 2
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];//100,200,300,400
    }
    int maxi=0;
    for(int i=0;i<k;i++){
        maxi+=ar[i];
    }
    int current_maxi=maxi;//300
    int ans=0;
    for(int i=k;i<n;i++){//2//3
        current_maxi+=ar[i]-ar[i-k];//500//700
        ans=max(current_maxi,ans);//500//700
    }
    cout<<ans<<endl;
    checkmate;
}

