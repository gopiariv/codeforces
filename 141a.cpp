#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string s;
	vector<int> a(26, 0), b(26, 0);
	cin >> s;
	for(int i = 0; i < s.size();i++)
		a[s[i] - 'A']++;
	
	cin >> s;
	for(int i = 0; i < s.size();i++)
		a[s[i] - 'A']++;

	cin >> s;
	for(int i = 0; i < s.size();i++)
		b[s[i] - 'A']++;
	
	for (int i = 0; i < 26; ++i)
		if(a[i] != b[i])
		{
			cout << "NO\n";
			return 0;
		}

	cout << "YES\n";

}