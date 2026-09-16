using namespace std;
#include <iostream>
#include "Solution.h";
#include <cmath>

int Solution::titleToNumber(string columnTitle) {
	int ans = 0;
	for (int i = 0; i < columnTitle.size(); i++) {
		ans = ans * 26 + (columnTitle[i] - 'A' + 1);
	}
	return ans;
}
