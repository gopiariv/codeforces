#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int noOfClicks = 0;
	if(m < n)
	{
		cout << n - m << "\n";
		return 0;
	}
	while(n < m)
	{
		if(m % 2 == 0)
		{			
			m /=2;
		}
		else
		{
			m ++;
		}
		noOfClicks++ ;
	}
	cout << abs(noOfClicks + n - m) <<"\n";

	return 0;
}

/*
using BFS
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int noOfClicks = 0;
	if(m < n)
	{
		cout << n - m << "\n";
		return 0;
	}
	vector<int> d(10002, -1);
	queue<int> q;
	d[n] = 0;
	q.push(n);
	int top;
	while(!q.empty())
	{
		top = q.front();
		if(top == m)
		{
			cout << d[top] <<"\n";
			return 0;
		}
		q.pop();
		if(2 * top <= 10000)
			if(d[2 * top] == -1)
			{
				d[2 * top] = d[top] + 1;
				q.push(2 * top);
			}
		if (top > 1 && d[top - 1] == -1)
		{
			d[top - 1] = d[top] + 1;
			q.push(top - 1);
		}

	}

	return 0;
}





*/