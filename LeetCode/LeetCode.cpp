using namespace std;
#include <iostream>
#include "Solution.h";

int main() {
    Solution solution;

    vector<int> x = { 9 };
    vector<int> y = { 9, 9 };
    vector<int> z = { 1, 9, 5, 9 };
    vector<int> d = { 1, 2, 3, 4 };

    solution.plusOne(x);
    solution.plusOne(y);
    solution.plusOne(z);
    solution.plusOne(d);
}
