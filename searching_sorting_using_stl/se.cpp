//searching
#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
	vector<int>v{1,2,3,4,5,6,7};
	vector<int>::iterator it;
	int x;
	cin>>x;
	it=find(v.begin(),v.end(),x);
	if(it==v.end())
    {
        cout<<"NOT FOUND"<<endl;
    }
    else{
        cout<<(it-v.begin())<<endl;//index
         cout<<*it<<endl;//value
    }
	return 0;
}
