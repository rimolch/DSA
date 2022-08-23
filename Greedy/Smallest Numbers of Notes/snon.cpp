#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t;
	cin>>t;
  while(t--){
	ll n;
	cin>>n;
	ll a,a1,b,b1,c,c1,d,d1,e,e1,f;
	a = n/100;
	 a1=n%100;
	b =a1/50;
	 b1=a1 %50;
	c =b1/10;
	 c1=b1%10;
	d = c1/5;
	  d1=c1%5;
	e = d1/2;
	  e1 =d1%2;
	f = e1/1;
    cout<<a+b+c+d+e+f<<endl;
  }
	return 0;
}
