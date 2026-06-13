/*
Count Occurrences in Sorted Array
Time Complexity: O(log n)
Space Complexity: O(1)
*/

    int searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int first = -1, last = -1;
        
        //check left
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]<target){
                low = mid+1;
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                first = mid;
                high = mid-1;
            }
        }

        //reset low and high to check right
        low = 0; high = nums.size() - 1;

        //if the number if not present in the array:
        if(first == -1) return 0;
      
        //check right
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]<target){
                low=mid+1;
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                last = mid;
                low = mid+1;
            }
        }

        //return final
        int occurance = last - first + 1;
        return occurance;

    }
