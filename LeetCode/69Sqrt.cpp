#include "Solution.h"
using namespace std;

int Solution::mySqrt(int x) {
    int r = x, l = 0, m = 0;

    while (l < r) {
        m = (l + r + 1ll) / 2;

        if (m > x / m) {
            r = m - 1;
        }
        else {
            l = m;
        }
    }

    return l;
}