#include <iostream>
#include <cmath>
using namespace std;

bool is_lucky(int n)
{
	n = abs(n);
	while(n)
	{
		if(n%10  == 8)
		{
			return 1;			
		}
		n/=10;
	}
	return 0;
}

int main()
{
	int a;
	cin >> a;
	for (int i = 1; i < 17; ++i)
	{
		if(is_lucky(a+i))
		{
			cout<< i<< endl;
			break;
		}
		
	}
	return 0;
}