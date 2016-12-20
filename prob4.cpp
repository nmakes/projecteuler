#include <iostream>
using namespace std;

int a = 999, b = 999;

int size=0; // global variable

int * getList(int a)
{
	size =0;
	int * array=NULL;
	int * temp;
	while(a!=0)
	{
		temp = array;
		array = new int[++size];
		for(int i=0; i<size-1; i++)
		{
			array[i] = temp[i];
		}
		array[size-1] = a%10;
	}
	return array;
}

int isPalindrome(int a)
{
	if (((int)a/10)==0)
	{
		return 1;
	}
	else
	{
		int * list = getList(a);
		for(int i=0; i<size; i++)
		{
			if(list[i]!=list[size-i])
			{
				return 0;
			}
		}
	}
	return 1;
}

int main()
{
	cout << isPalindrome(52);
	return 0;
}