using namespace std;
#include <iostream>
#include "Solution.h";
#include <cmath>

int Solution::titleToNumber(string columnTitle) {
	int ans = 0;
	for (int i = 0; i < columnTitle.size(); i++) {
		ans += pow(26, columnTitle.size() - i - 1) * ((columnTitle[i] - 64) % 27);
	}
	return ans;
}
