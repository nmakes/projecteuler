#include <iostream>
#include <vector>
using namespace std;

#define number long long int

int isPalindrome(number N)
{
	vector<int> v;

	while(N!=0)
	{
		v.push_back(N%10);
		N/=10;
	}

	int lastpos = v.size()-1;

	int last = v[lastpos];

	for(int i=0; i<(lastpos+1)/2; i++)
	{
		if(v[i]!=v[lastpos-i])
		{
			return 0;
		}
	}

	return 1;
}

int num1 = 999;

int main()
{
	number largestpalindrome = 1;

	for(int i=num1; i>=100; i--)
	{
		for(int j=i; j>=100; j--)
		{
			number K = i*j;
			if(isPalindrome(K) && (K>largestpalindrome))
			{
				largestpalindrome = K;
			}
		}
	}

	cout << largestpalindrome;
}