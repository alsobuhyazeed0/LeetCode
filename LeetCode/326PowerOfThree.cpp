using namespace std;
#include <iostream>
#include "Solution.h";
#include <cmath>;
#include <bitset>;

bool Solution::isPowerOfThree(int n) {
    while (n > 2) {
        if (n % 3) {
            return false;
        }
        n /= 3;
    }
    return n == 1;
}
