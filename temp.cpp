#include <iostream>
using namespace std;

#define MAX_SIZE 20000

long long int populate(int n)
{
	long long int num = 0;
	for(int i=1; i<=n; i++)
	{
		num += i;
	}
	return num;
}

int getDivCount(long long int n)
{
	int count =0;
	long long int t=1;
	cout << n << ": ";
	while(t<=n)
	{
		if(n%t==0)
		{
			count++;
		}

		t++;
	}
	cout << " | " << count << endl;
	return count;
}

int start = 10000;
int end = 100000;

int main()
{
	long long int K = populate(start-1);

	int max =400;

	for(long long int i=start; i<=end; i++ )
	{
		K = K+i;
		if(getDivCount(K)>500)
		{
			max = 400;
			return 0;
		}
	}
	cout <<K;
}