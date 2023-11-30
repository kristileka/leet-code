#include "iostream"
#include "vector"

using namespace std;


int searchInsert(vector<int> &nums, int target) {
    int item = 0;
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        item = left + (right - left) / 2;
        if (nums[item] == target) {
            return item;
        }
        if (target < nums[item]) {
            right = item - 1;
        } else {
            left = item + 1;
        }
    }
    return left;
}