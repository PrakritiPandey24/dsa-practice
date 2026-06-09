/*
Linear Search

Time Complexity: O(n)
Space Complexity: O(1)

*/

int search(const vector<int>& nums, int target){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}
