/*
LC 189 - Rotate Array

Time Complexity: O(n)
Space Complexity: O(1)

*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size(); // handle k > n -> to loop around if needed. 
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
