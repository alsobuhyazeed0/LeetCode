using namespace std;
#include <iostream>
#include "Solution.h";

int main() {
    Solution solution;

    vector<vector<int>> edges = { {1, 2}, {2, 3}, {4, 2 } };
    //vector<vector<int>> edges = { {1, 2}, {5, 1}, {3, 1} };

    cout << solution.findCenter(edges);
}
