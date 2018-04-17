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

using namespace std;

int main() 
{
	int n;
	cin >> n;
	vector<long int> myVec(pow(10, 5), 0);
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		myVec[temp]++;
		cout << myVec[temp] << endl;
	}
	return 0;
}