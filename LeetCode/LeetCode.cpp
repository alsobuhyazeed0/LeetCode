using namespace std;
#include <iostream>
#include "Solution.h";

int main() {
    Solution solution;

    vector<vector<int>> trust = { {1, 2}};
    //vector<vector<int>> trust = { {1, 3}, {2, 3} };
    //vector<vector<int>> trust = { {1, 3}, {2, 3}, {3, 1} };

    cout << solution.findJudge(2, trust);
}
