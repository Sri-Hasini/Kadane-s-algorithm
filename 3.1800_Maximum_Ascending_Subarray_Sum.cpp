//1800. Maximum Ascending Subarray Sum - leetcode (easy) (acc : 62%) 
//https://leetcode.com/problems/maximum-ascending-subarray-sum/description/
/*
Given an array of positive integers nums, return the maximum possible sum of an ascending subarray in nums.
A subarray is defined as a contiguous sequence of numbers in an array.
A subarray [numsl, numsl+1, ..., numsr-1, numsr] is ascending if for all i where l <= i < r, numsi  < numsi+1. Note that a subarray of size 1 is ascending
  */
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum = nums[0], current_sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < nums[i]) {
                current_sum += nums[i];
            }
            else {
                if (max_sum < current_sum) max_sum = current_sum;
                current_sum = nums[i];
            }
        }
        if (max_sum < current_sum) max_sum = current_sum;
        return max_sum;
    }
};
