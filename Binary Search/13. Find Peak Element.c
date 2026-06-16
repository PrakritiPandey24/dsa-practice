/*
LC 162. Find Peak Element
*/

/*
Brute Force Approach
Time: O(n)
Space: O(1)
*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size()==1){
            return 0;
        }
        for(int i = 1; i < nums.size()-1; i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                return i;
            }
        }
        if(nums[0] > nums[1]){
            return 0;
        }
        return nums.size()-1;
    }
};

/*
Optimal Approach
Time: O(log n)
Space: O(1)
*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size()-1;

        while(low<high){
            int mid = low+(high-low)/2;
            if(nums[mid] < nums[mid+1]){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        return low; 
    }
};
















