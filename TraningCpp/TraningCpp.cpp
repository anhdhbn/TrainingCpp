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

bool Check(string str1, string str2)
{
	if (str1.length() == str2.length())
	{
		for (int i = 0; i < str1.length(); i++)
		{
			if (str1[i] != str2[i])
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}

int main() 
{
	string str1, str2;
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cin >> str1 >> str2;
		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());
		cout << (Check(str1, str2) ? "yes" : "no") << endl;
	}
	return 0;
}