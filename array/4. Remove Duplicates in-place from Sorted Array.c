/*
LC 26
Remove Duplicates in-place from Sorted Array
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[left] != nums[i]){
                left++;
                nums[left] = nums[i];
            }
        }
        return left+1;
    }
};
