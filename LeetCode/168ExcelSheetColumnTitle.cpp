using namespace std;
#include <iostream>
#include "Solution.h";

string Solution::convertToTitle(int columnNumber) {
	int x = 0;
	string ans = "";

	while (true) {
		x = columnNumber % 26;
		
		if (x == 0) {
			ans += 'Z';
			x = 26;
		}
		else {
			ans += 'A' + (x - 1);
		}

		if (columnNumber > 26) {
			columnNumber = (columnNumber - x) / 26;
		}
		else {
			break;
		}

	}

	std::reverse(ans.begin(), ans.end());

	return ans;
}
