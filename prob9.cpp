#include <iostream>
using namespace std;

int squares [ 1001] = {0};

void populate()
{
	for(int i=0; i<1001; i++)
	{
		squares[i] = i*i;
	}
}



int main()
{
	int a,b,c;
	for(a=1; a<=998; a++)
	{
		for(b=1; b<=998; b++)
		{
			for(c=1; c<=998; c++)
			{
				if(c*c == (a*a) + (b*b) && a+b+c==1000)
				{
					cout << a*b*c;
				}
			}
		}
	}

	return 0;
}