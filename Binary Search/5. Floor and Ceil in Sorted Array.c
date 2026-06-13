/*
Floor and Ceil in Sorted Array
Time Complexity: O(log n)
Space Complexity: O(1)
*/

int Floor(vector<int>& nums, int target){
  //lower bound
    int low = 0, high = nums.size()-1, ans = -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] > target){
            high = mid-1;
        }else{
            ans = mid;
            low = mid+1;
        }
    }

    return (ans == -1) ? -1 : nums[ans];
}

int Ceil(vector<int>& nums, int target){
  //upper bound
    int low = 0, high = nums.size()-1, ans = nums.size();
    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] < target){
            low = mid+1;
        }else{
            ans = mid;
            high = mid-1;
        }
    }
    return (ans == nums.size()) ? -1 : nums[ans];
}

vector<int> Search(vector<int>& nums, int target){
  int f = Floor(nums, target);
  int c = Ceil(nums, target);
  return {f, c};
}
