// TraningCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <fstream>
#include <cmath>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>

class Values
{
public:
	Values(int firstValue = 0, int lastValue = 0) {
		this->firstValue = firstValue;
		this->lastValue = lastValue;
	}
	int firstValue;
	int lastValue;
};

bool func(Values v1, Values v2)
{
	if (v1.firstValue != v2.firstValue)
	{
		return v1.firstValue < v2.firstValue;
	}
	else
	{
		return v1.lastValue < v2.lastValue;
	}
}

int main()
{
	int n;
	cin >> n;
	vector<Values> myVec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> myVec[i].firstValue >> myVec[i].lastValue;
	}
	sort(myVec.begin(), myVec.end(), func);
	vector<Values> result;
	for (int i = 0; i < n; i++)
	{
		bool flag = false;
		for (int j = 0; j < result.size(); j++)
		{
			if (myVec[i].firstValue <= result[j].lastValue)
			{
				result[j].lastValue = max(result[j].lastValue, myVec[i].lastValue);
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			Values v(myVec[i].firstValue, myVec[i].lastValue);
			result.push_back(v);
		}
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i].firstValue << " " << result[i].lastValue << endl;
	}
    return 0;
}


