#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n)
{
	
	int lim = sqrt(n);
	vector<bool> check(n + 10, 1);
	check[0] = 0;
	check[1] = 0;
	for (int i = 2; i <= lim; ++i)
	{
		if(check[i])
		{
			for (int j = i*i; j < (n + 10); j += i)
			{
				check[j] = 0;
			}
		}
	}
	// for (int i = 0; i < (n + 10); ++i)
	// {
	// 	if (check[i])
	// 		cout << i <<" ";
	// }
	return check;
}

bool isSquare(long long n)
{
	return sqrt(n) == floor(sqrt(n));
}

int main()
{   
    ios::sync_with_stdio(false);

    vector<bool> primeCheck;
    primeCheck = sieve(1000000);
    int n;
    cin >> n;
    long long int temp;
    for (int i = 0; i < n; ++i)
    {
    	cin >> temp;
    	if (isSquare(temp))
    	{
    		if(temp == 1)
    			cout <<"NO\n";
    		else
    		{
    			if(primeCheck[(int)sqrt(temp)])
    				cout << "YES\n";
    			else
    				cout <<"NO\n";
    		}
    	}
    	else
    		cout <<"NO\n";
    	
    }
    return 0;
}


