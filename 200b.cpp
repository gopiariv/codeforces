#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, t;
	double p = 0.0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> t;
		p += t;
	}

	p /= n;

	cout << setprecision(13) << p;


}