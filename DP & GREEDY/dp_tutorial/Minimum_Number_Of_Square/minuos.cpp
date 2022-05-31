#include<iostream>

using namespace std;

const int N = 1e5+7,MOD = 1e7+7;

int dp[N];

int MinSquare(int n)
{
      if(n==0||n==1||n==2||n==3)//base case
      {
          return n;
      }
      if(dp[n]!=MOD)
      {
          return dp[n];
      }
      for(int i=1;i*i<=n;i++)
      {
          dp[n]=min(dp[n],1+MinSquare(n-i*i));
      }
      return dp[n];
}
signed main()
{
   int n;
   cin>>n;
   for(int i=0;i<N;i++)
   {
       dp[i]=MOD;
   }
   cout<<MinSquare(n)<<endl;
}
