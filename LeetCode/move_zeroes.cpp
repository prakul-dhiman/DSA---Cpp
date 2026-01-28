// LeetCode 283 - Move Zeroes
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
