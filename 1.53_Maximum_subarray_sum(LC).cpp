//Maximum subarray sum - leetcode (medium) (acc : 51%)
//https://leetcode.com/problems/maximum-subarray/description/
// Given an integer array nums, find the subarray with the largest sum, and return its sum.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_current = nums[0], max_global = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            max_current = max(nums[i], max_current+nums[i]);
            if (max_global < max_current) max_global = max_current;
        }
        return max_global;
    }
}; 
