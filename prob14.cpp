#include <iostream>
using namespace std;

int flag = 0; //Got sequence of powers of 2

long long int table[] = {1,  2,  4,  8,  16,  32,  64,  128,  256,  512,  1024,  2048,  4096,  8192,  16384,  32768,  65536,  131072,  262144,  524288};

int search(int n)
{
	for(int i=0; i<19; i++)
	{
		if (n == table[i])
		{
			return i + 1;
		}
	}
}

int isRoot(long long int n, long long int p) // checks if n = p^k for some k
{
	long long int pow = p;
	while(pow <= n)
	{
		if (n == pow)
			return 1;
		else
			pow *= p;
	}
	return 0;
}

long long int chainLength(long long int i)
{
	if(isRoot(i,2))
	{
		return search(i);
	}
	else
	{
		if(i%2==0)
		{
			return 1 + chainLength(i/2);
		}
		else
		{
			return 1 + chainLength(3*i + 1);
		}
	}
}

int main()
{
	long long int longest_chain_number = 1;
	long long int longest_chain_size = 1;
	for(long long int i=1; i<=1000000; i++)
	{
		long long int length = chainLength(i);
		if(length > longest_chain_size)
		{
			longest_chain_number = i;
			longest_chain_size = length;
		}
	}
	cout << "number: " << longest_chain_number << endl << "size: " << longest_chain_size;
}