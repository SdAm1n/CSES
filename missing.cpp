#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[t-1];
	for(int i=0;i<t-1;i++)
	{
		cin>> arr[i];
	}
	sort(arr,arr+t-1);
	int ind = 0;
	
	for(int i=1;i<t;i++)
	{
		
		if(arr[i-1]!=i)
		{
			ind = i;
			break;
		}
		else ind = i+1;
	}
	cout << ind << endl;
}
