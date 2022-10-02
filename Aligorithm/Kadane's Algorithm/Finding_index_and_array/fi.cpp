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
     int ar[n];
     for(int i=0;i<n;i++){
        cin>>ar[i];
     }
    int ans =ar[0],sum=0,start=0,end=0,s=0,a1=ar[0];
    for(int i=0;i<n;i++){
        ans =max(ans,ar[i]);
    }
    if(ans<0){
       cout<<ans<<endl;
    }
    for(int i=0;i<n;i++){
        sum+=ar[i];
        if(ans<sum){
            ans = sum;
            start = s;
            end =i;
        }
        if(sum<0){
           sum =0;
           s =i+1;
        }
     }
     cout<<ans<<endl;
     cout<<start<<" "<<end<<endl;
     cout<<"The subarray  where the max_sum is present is "<<endl;
        for(int i=start;i<=end;i++){
            cout<<ar[i]<<" ";
        }
	return 0;
}
