#include <iostream>
#include "Solution.h"
using namespace std;
int main()
{
	vector<int> nums1, nums2;
	nums1.push_back(4);
	nums2.push_back(1);
	nums2.push_back(2);
	nums2.push_back(3);
	nums2.push_back(5);
	nums2.push_back(6);
	std::cout << Solution::findMedianSortedArrays(nums1, nums2);
	return 0;
}