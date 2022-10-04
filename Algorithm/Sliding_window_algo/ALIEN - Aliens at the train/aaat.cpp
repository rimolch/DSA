#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
  int t;cin>>t;
  while(t--)
  {
    int at,bt;
    cin>>at>>bt;
    int ar[at+1];
    for(int i=1;i<=at;i++){
      cin>>ar[i];
    }
    int m_s = 0, m_p = 0,c_p = 0;//m_s for maximum steps,c_s for current steps,m_p for max people and c_p for current people
    for(int left = 1, right = 1; right <=at; right++)
    {
        c_p+=ar[right];

        while(c_p > bt){
            c_p -= ar[left++];
        }
        int c_s = right - (left - 1);
        if(c_s >m_s)
        {
            m_s= c_s;
            m_p =c_p;
        }
        else if(c_s == m_s)
        {
            m_p = min(m_p, c_p);
        }
    }
     printf("%d %d\n",m_p,m_s );
  }
	return 0;
}
