using namespace std;
#include <iostream>
#include "Solution.h";

int main() {
    Solution solution;

    int sum = 1;
    for (int i = 1; i <= 30; i++) {
        sum *= 2;
        cout << solution.isPowerOfTwo(sum) << endl;;
    }

    cout << solution.isPowerOfTwo(12) << endl;;
    cout << solution.isPowerOfTwo(-2147483648) << endl;;

}
