#include <iostream>
using namespace std;

long int f1(long int n)
{
	return ( n*(n+1)*(2*n+1) )/6;
}

long int g1(long int n)
{
	return ( n*n*(n+1)*(n+1) )/4;
}

int main()
{

	cout << g1(100) - f1(100);
}