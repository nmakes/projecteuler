#include <iostream>
using namespace std;

#define number long int
#define incr 

number LCM(number A[], number size)
{
	number l=A[0];
	int flag = 1;

	for(int i=0; i<size; i++)
	{
		if (A[i] > l)
		{
			l=A[i];
		}
	}

	for(int j=l; ; j+=l)
	{
		flag =1;

		for(int k=0; k<size&&flag; k++)
		{
			if(j%A[k]!=0)
			{
				flag=0;
				break;
			}
		}

		if(flag==1)
		{
			return j;
		}
	}
}

int main()
{
	int flag = 1;
	number N[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	cout << LCM(N, 20);
} 