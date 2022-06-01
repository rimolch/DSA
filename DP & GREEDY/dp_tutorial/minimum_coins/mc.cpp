#include<bits/stdc++.h>

using namespace std;

int minCoins(int coins[], int m, int V)
{
    int dp[V+1];
    dp[0] = 0;
    for (int i=1; i<=V; i++)
    {
        dp[i] = INT_MAX;
    }
    for (int i=1; i<=V; i++)
    {
        for (int j=0; j<m; j++)
        {
           if (coins[j] <= i)
           {
              int res = dp[i-coins[j]];
              if (res != INT_MAX && res + 1 <dp[i])
              {
                  dp[i] = res + 1;
              }
           }
        }
    }
    return dp[V];
}
int main()
{
    int w,n;
    cin>>w>>n;
    int coins[n];
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    cout<<minCoins(coins, n, w);
    return 0;
}
