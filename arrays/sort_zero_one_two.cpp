/*

Sort the array of 0’s , 1’s and 2’s . (LeetCode 7S)

Given an array nums with n objects colored red, white or blue, sort them in-place so that
objects of the same color are adjacent, with the colors in the order red, white and blue.

We will use the integers 0, 1 and 2 to represent the color red, white and blue respectively.

You must solve this problem without using the library's sort function.

Example 1:
Input: nums = [2, 0, 2, 1, 1, 0]
Output: [0, 0, 1, 1, 2, 2]

Example 2:
Input: nums = [2, 0, 1]
Output: [0, 1, 2]

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.

Follow up: Could you come up with a one-pass algorithm using only constant extra space?

*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void displayElements(vector<int>& nums) {
	for(int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
}

void sortColors(vector<int>& nums) {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    // 0 to low - 1 -> 0
    // low to mid-1 -> 1
    // high + 1 to end -> 2
    while(mid <= high) {
        if(nums[mid] == 2) {
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        } else if(nums[mid] == 0) {
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            low++;
            mid++;
        } else {
            mid++;
        }
    }
}

int main() {
	vector<int> nums;
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	cout << "Enter " << n << " 0's, 1's and 2's values" << endl;
	for(int i = 0; i < n; i++) {
		int ele;
		cin >> ele;
		nums.push_back(ele);
	}

	cout  << "Before arranging elements: ";
	displayElements(nums);
	sortColors(nums);
	cout  << "After arranging elements: ";
	displayElements(nums);

	return 0;
}
