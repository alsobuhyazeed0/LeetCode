using namespace std;
#include <iostream>
#include "Solution.h";

#include <climits>

vector<int> Solution::plusOne(vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; --i) {
        digits[i]++;
        digits[i] %= 10;
        if (digits[i] != 0) return digits;
    }

    digits.insert(digits.begin(), 1);
    return digits;
}