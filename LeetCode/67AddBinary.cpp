#include "Solution.h"

string Solution::addBinary(string a, string b) {

	string res = "";
	int i = a.length() - 1, j = b.length() - 1;
	int c = 0;

	while (i >= 0 || j >= 0) {
		int sum = c;

		if (i >= 0) {
			sum += a[i] - '0';
		};

		if (j >= 0) {
			sum += b[j] - '0';
		};

		res += to_string(sum % 2);
		c = sum / 2;

		i--; j--;
	}

	if (c != 0) res += '1';

	 std::reverse(res.begin(), res.end());

	 return res;
}