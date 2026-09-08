#include "7ReverseInteger.h"
#include <climits>

int Solution::reverse(int x) {
    int n_num = 0;

    while (x) {
        if (n_num < INT_MIN / 10 || n_num > INT_MAX / 10) {
            return 0;
        }

        n_num = (n_num * 10) + (x % 10);
        x /= 10;
    }

    return n_num;
}