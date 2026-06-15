/*
Find out how many times the array has been rotated
*/

/*
Naive Approach
Time Complexity: O(n)
Space Complexity: O(1)
*/

for(int i = 0; i < nums.size()-1; i++){
  if(nums[i]>nums[i+1]){
    return i+1;
  }
}
return 0;

/*
Naive Approach
Time Complexity: O(log n)
Space Complexity: O(1)

Find the minimum and return that index because that is where the breaking point is. 
*/

int low = 0, high = nums.size()-1;
while(low < high){
    int mid = low + (high - low)/2;
    if(nums[mid] > nums[high]){
        low = mid + 1;
    }else{
        high = mid;
    }
}
return low;















