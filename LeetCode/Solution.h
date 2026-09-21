#pragma once

using namespace std;
#include <vector>
#include <string>

class Solution {
public:
    int reverse(int x);
    vector<int> plusOne(vector<int>& digits);   
    string addBinary(string a, string b);
    int mySqrt(int x);
    string convertToTitle(int columnNumber);
    int titleToNumber(string columnTitle);
    int missingNumber(vector<int>& nums);
    bool canWinNim(int n);
};