using namespace std;
#include <iostream>
#include "Solution.h";

int main() {
    Solution solution;

    int sum = 1;
    for (int i = 1; i <= 19; i++) {
        sum *= 3;
        cout << solution.isPowerOfThree(sum) << endl;;
    }

    cout << solution.isPowerOfThree(12) << endl;;
    cout << solution.isPowerOfThree(15) << endl;;
    cout << solution.isPowerOfThree(16) << endl;;
    cout << solution.isPowerOfThree(-1) << endl;;

}
