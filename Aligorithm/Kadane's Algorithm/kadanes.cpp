#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int Maximum_Sum_Subarray(int arr[],int n)	//Overall Time Complexity O(n)
{
	int ans = arr[0],sum = 0;
	for(int i = 1;i < n; ++i)	//Check if all are negative
		ans = max(ans,arr[i]);
	if(ans<0)					//if Max < 0 return Max
		return ans;
	ans = 0;
	for(int i = 0 ;i < n; ++i)
	{
		if(sum + arr[i] > 0)//check if sum+ arr[i] is positive then set the sum =sum+arr[i];
			sum+=arr[i];
		else              //else set the sum =0;
			sum  = 0;
		ans = max(ans,sum);
	}
	return ans;
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<Maximum_Sum_Subarray(arr,n)<<"\n";
    return 0;
}
