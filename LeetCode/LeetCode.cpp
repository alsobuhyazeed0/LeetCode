using namespace std;
#include <iostream>
#include "Solution.h";

int main() {
    Solution solution;

    cout << solution.convertToTitle(28) << endl; // AB
    cout << solution.convertToTitle(701) << endl; // ZY
    cout << solution.convertToTitle(729) << endl; //ABA
    cout << solution.convertToTitle(52) << endl; //AZ

}
