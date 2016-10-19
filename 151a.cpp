#include <iostream>

using namespace std;

int main()
{
	int n, k, l, c, d, p, nl, np, res;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	res = min(min((k * l) / (n * nl), (c * d) / n), p / (n * np));


	cout << res << endl;
}