#include<iostream>

using namespace std;

int dp[100][100];
signed main()
{
   int a;//amount
   cin>>a;
   int c;//number of coins
   cin>>c;
   int ar[c];
   for(int i=0;i<c;i++)
   {
      cin>>ar[i] ;
   }
   for(int i=0;i<=c;i++)
   {
       for(int j=0;j<=a;j++)
       {
           if(i==0&&j==0)
           {
               dp[i][j]=1;
           }
           else
           {
               if(ar[i]>j)
               {
                   dp[i][j]=dp[i-1][j];
               }
               else
               {
                   dp[i][j]=dp[i-1][j]+dp[i][j-ar[i]];
               }
           }
       }
   }
  cout<<dp[c][a]<<endl;
}
