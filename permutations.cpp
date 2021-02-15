#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout << 1 << endl;
		return;
	}
	if(n<=3)
	{
		cout << "NO SOLUTION" << endl;
		return;
	}
	vector<int> odd,even;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
			even.push_back(i);
		else odd.push_back(i);
	}
	
	for(auto i:even) cout << i << " ";
	for(auto i:odd) cout << i << " ";
	cout << endl;
		
	
}

int main()
{
	solve();
}

