/*
LC 35. Search Insert Position
Time Complexity: O(log n)
Space Complexity: O(1)
*/

int low = 0, high = nums.size()-1, ans = nums.size();
        while(low <= high){
            int mid = low+(high -low)/2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
}
