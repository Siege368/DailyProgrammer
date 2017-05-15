#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
	unsigned int i, j, result;
	while (result != 1)
	{
		result = 0;
		cin >> i >> j;
		for (int bitCount = 0; bitCount < 8; bitCount++)
		{
			unsigned int temp = (j >> bitCount) & 0x0001;
			result ^= (temp * i) << bitCount;
		}// for
		cout << i << "@" << j << "=" << result << endl;
	}// while not 0 0
	return 0;
}// main()

// Main.cpp
