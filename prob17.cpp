#include <iostream>
#include <fstream>
using namespace std;

string numbers[21] = {"zero", "one", "two"};

int main()
{
	fstream file("numberwords.txt", ios::app);

	file.close();
}