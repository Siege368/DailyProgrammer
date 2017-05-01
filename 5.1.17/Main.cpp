#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

bool IsZeroSumSet(vector<int> v)
{
	if (v.size() == 1)
	{
		return v[0] == 0;
	}
	else
	{
		int sum = 0;
		for (int i = 0; i < v.size(); i++)
		{
			sum += v[i];
			if (sum > 0)
				break;
		}

		if (sum == 0)
			return true;

		for (int i = 0; i < v.size(); i++)
		{
			vector<int> nv = v;
			nv.erase(i);
			return IsZeroSumSet(nv);
		}
	}
	return false;
}

int main(int argc, char *argv[])
{
	vector<int> v;
	for (int i = 1; i < argc; i++)
	{
		v.push_back(atoi(argv[i]));
	}// for

	// Main Challenge
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
