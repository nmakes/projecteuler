#include <iostream>
using namespace std;

long long int waystrack[21][21];

void populate()
{
	for(int i=0; i<=20; i++)
	{
		for(int j=0; j<=20; j++)
		{
			waystrack[i][j] = -1;
		}
	}
}

long long int ways(int m, int n)
{
	if(n==0||m==0)
	{
		return 1;
	}
	else if(n==1)
	{
		waystrack[m][n] = m+1;
		return m+1;
	}
	else if(m==1)
	{
		waystrack[m][n] = n+1;
		return n+1;
	}
	else
	{
		if(waystrack[m-1][n]==-1)
		{
			waystrack[m-1][n] = ways(m-1, n);
		}
		if(waystrack[m][n-1]==-1)
		{
			waystrack[m][n-1] = ways(m, n-1);
		}
		if(waystrack[m][n]==-1)
		{
			waystrack[m][n] = waystrack[m-1][n]+waystrack[m][n-1];
		}
		return waystrack[m][n];
	}
}

int main()
{
	populate();
	cout << ways(20,20);
	return 0;
}