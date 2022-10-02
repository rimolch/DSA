#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    int n;
    while(cin>>n){
      int ar[n];
      if(n==0){
           break;
       }
     else{
        for(int i=0;i<n;i++){
            cin>>ar[i] ;
        }
        int ans1 = ar[0],sum=0;
        for(int i=1;i<n;i++){
            ans1=max(ans1,ar[i]);
        }
        if(ans1<0) {
           cout<<"Losing streak."<<endl;
        }
       else{
         int ans2=ar[0];
          for(int i=0;i<n;i++){
             if(sum+ar[i]>0){
                sum+=ar[i];
              }
              else{
                sum=0;
              }
           ans2=max(ans2,sum);
          }
        cout<<ans2<<endl;
       }
    }
  }
	return 0;
}
