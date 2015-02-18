#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int i = 0,sLen = s.size();
	bool starting = 1;
	int count = 0;
	for (int i = 0; i < sLen; ++i)
	{
		if(s.substr(i,3) == "WUB")
		{

			if(!starting && count == 0)
			{
				cout << " ";
				count += 1;
			}
			
			i += 2;
		}
		else
		{
			count = 0;
			cout << s[i];
			starting = 0;
		}
	}
	cout << "\n";

	return 0;
}