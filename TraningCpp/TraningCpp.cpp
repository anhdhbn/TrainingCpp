// TraningCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <stack>

int main()
{
    string str;
    cin >> str;
    vector<string> result;
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j <= length - i; j++)
        {
            result.push_back(str.substr(i, j));
        }
    }
    sort(result.begin(), result.end());
    for (int i = 0; i < result.size(); i++)
    {
        int lengthT = 0;
        while (i != result.size() - 1 && result[i] == result[i + lengthT + 1])
        {
            lengthT++;
        }
        result.erase(result.begin() + i, result.begin() + lengthT + i);
    }
    cout << result.size();
    return 0;
}
