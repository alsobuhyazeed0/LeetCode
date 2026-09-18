using namespace std;
#include <iostream>
#include "Solution.h";
#include <cmath>

int Solution::missingNumber(vector<int>& nums) {

	int numsSum = 0, indexSum = 0;

	for (int i = 0; i < nums.size(); i++) {
		indexSum += i;
		numsSum += nums[i];
	};

	
	return (indexSum + nums.size()) - numsSum;
}
