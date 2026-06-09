/*
LC 26 - Remove Duplicates from Sorted Array

Time Complexity: O(n)
Space Complexity: O(1)

*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[left] != nums[i]) {
                left++;
                nums[left] = nums[i];
            }
        }
        return left + 1;
    }
};
