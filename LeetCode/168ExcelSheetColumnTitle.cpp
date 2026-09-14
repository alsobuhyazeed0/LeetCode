using namespace std;
#include <iostream>
#include "Solution.h";

string Solution::convertToTitle(int columnNumber) {
	string ans = "";

	while (columnNumber) {
		ans += 'A' + ((columnNumber-1) % 26);
		columnNumber = (columnNumber - 1) / 26;
	}

	std::reverse(ans.begin(), ans.end());

	return ans;
}
