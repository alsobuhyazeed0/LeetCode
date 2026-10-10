#include "Solution.h"

int Solution::findJudge(int n, vector<vector<int>>& trust) {

    vector<int> in_deg(n + 1);
    vector<int> out_deg(n + 1);

    for (int i = 0; i < trust.size(); i++) {
        out_deg[trust[i][0]] += 1;
        in_deg[trust[i][1]] += 1;
    }

    for (int i = 1; i < n+1; i++) {
        if (out_deg[i] == 0 && in_deg[i] == n - 1) {
            return i;
        }
    }
    

    return -1;
}