#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
	vector<int> v;
	for (int i = 1; i < argc; i++)
	{
		v.push_back(atoi(argv[i]));
	}// for

	for (unsigned i = 0; i < v.size(); i++)
	{
		for (unsigned j = 0; j < v.size(); j++)
		{
			if (v[i] == (v[j] * -1))
			{
				cout << "true" << endl;
				return 0;
			}// if
		}// for
	}// for
	cout << "false" << endl;
	return 0;
}// main()

// Main.cpp