#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long t;
	cin>>t; 
	set<long long> s;
	while(t--)
	{
		long long x;
		cin>>x;
		
		s.insert(x);
	}
	cout << s.size()<< endl;
}
