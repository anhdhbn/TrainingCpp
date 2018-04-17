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

struct DataItem {
	string data;
	int key;
};

class HashTable
{
public:
	long int SIZE = 10000 + 3;

	vector<vector<DataItem>> myVec;
	HashTable()
	{
		vector<vector<DataItem>> temp(1000000);
		myVec = temp;
	}
	bool Add(string str)
	{
		DataItem item;
		item.data = str;
		item.key = abs(Hash(str));
		int index = item.key % SIZE;
		if (checkContainKey(item.key, index))
		{
			return false;
		}
		else
		{
			myVec[index].push_back(item);
			return true;
		}
	}

private:	
	int Hash(string str)
	{
		return std::hash<std::string>{}(str);
	}

	int hashCode(int key) {
		return key % SIZE;
	}

	bool checkContainKey(int key,int index)
	{
		for (int i = 0; i < myVec[index].size(); i++)
		{
			if (myVec[index][i].key == key)
			{
				return true;
			}
		}
		return false;
	}
};

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	HashTable ht;
	string temp;
	for (int i = 0; i < n; i++)
	{
		getline(cin, temp);
		cout << (ht.Add(temp) ? "no" : "yes") << endl;
	}
	return 0;
}