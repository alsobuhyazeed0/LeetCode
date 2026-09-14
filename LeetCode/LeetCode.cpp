using namespace std;
#include <iostream>
#include "Solution.h";

int main() {
    Solution solution;

    cout << solution.titleToNumber("A") << endl; // 1
    cout << solution.titleToNumber("AB") << endl; // 28
    cout << solution.titleToNumber("ZY") << endl; // 701
    cout << solution.titleToNumber("ABA") << endl; // 729
    cout << solution.titleToNumber("AZ") << endl; // 52
}
