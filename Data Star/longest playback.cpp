#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int count = 1;
	int res;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==s[i+1])
			count++;
			
		else count = 1;
		res = max(res,count);
	}
	
	cout << res << endl;
}
