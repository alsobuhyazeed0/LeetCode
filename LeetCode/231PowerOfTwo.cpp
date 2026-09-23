using namespace std;
#include <iostream>
#include "Solution.h";
#include <bitset>;
#include <string>;

bool Solution::isPowerOfTwo(int n) {
    return n >= 0 && bitset<32>(n).count() == 1;
};