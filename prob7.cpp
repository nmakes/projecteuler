#include <iostream>
using namespace std;

int A[10001] = {2,3,5,7,11,13}; // global list of all primes
int size=6; // size of the global list

int inlist(int list[], int size, int val) // binsearch in the list
{
	int flag = 0;

	if(val == list[size-1])
	{
		return 1;
	}
	else if(val==list[0])
	{
		return 1;
	}

	if(val > list[size-1])
	{
		return flag;
	}
	else if (val < list[0])
	{
		return flag;
	}
	else
	{
		int high = size-1, low = 0, mid = (high+low)/2;
		while(high >= low)
		{
			mid = (high+low)/2;
			if(val == list[mid])
			{
				flag=1;
				return flag;
			}
			else if(val > list[mid])
			{
				low = mid+1;
				continue;
			}
			else if(val < list[mid])
			{
				high = mid-1;
				continue;
			}
		}
	}

	return flag;
}

int main()
{

	long int num =13;
	int compositeFlag;

	while (size!=10001)
	{
		compositeFlag = 0;

		num+=2; // increment the number

		// check if the number has a prime factor

			// yes? scrap the number
			// no? add it to the list

		for(int i=0; i<size; i++)
		{
			if ( num % A[i] == 0 )
			{
				compositeFlag = 1;
				break;
			}
			else
			{
				continue;
			}
		}

		if( compositeFlag == 1 )
		{
			continue;
		}
		else
		{
			A[size] = num;
			size++;
			cout << size << ": " << num << endl;
		}


	}

	return 0;
}