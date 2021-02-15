#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{  
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin >> arr[i];
	
	ll count =0;
	
	for(ll i=0;i<n-1;i++)
	{
		if(arr[i+1]<arr[i])
		{
			ll temp = arr[i+1];
			arr[i+1] +=arr[i]-arr[i+1];
			count += arr[i]-temp;
		}
	}
	
	
	cout << count << endl;
}
