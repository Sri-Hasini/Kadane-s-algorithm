//152. Maximum Product Subarray - leetcode(medium) (acc : 34%)
//https://leetcode.com/problems/maximum-product-subarray/description/
/*
Given an integer array nums, find a subarray that has the largest product, and return the product. The test cases are generated so that the answer will fit in a 32-bit integer.
*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min_product = nums[0], max_product = nums[0], final_product = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) swap(max_product, min_product);
            max_product = max(nums[i], nums[i] * max_product);
            min_product = min(nums[i], nums[i] * min_product);
            if (max_product > final_product) final_product = max_product;
        }
        return final_product;
    }
};
