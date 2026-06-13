/*
Lower Bound
Time Complexity: O(log n)
Space Complexity: O(1)
*/

int searchLower(vector<int>& nums, int target){
  int low = 0, high = nums.size()-1, ans = nums.size();
  while( low <= high){
    int mid = low+(high-low)/2;
    if(nums[mid] < target){
      low = mid+1;
    }else{
      ans = mid;
      high = mid-1;
    }
  }
  return ans;  
}
