/*
LC 540. Find Minimum in Rotated Sorted Array
Time Complexity: O(log n)
Space Complexity: O(1)
*/

/*
XOR method
Time Complexity: O(n)
Space Complexity: O(1)
*/
int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(auto i : nums){
            ans ^= i;
        }
        return ans;
}

/*
Hashing method
Time Complexity: O(n)
Space Complexity: O(1)
*/
 int singleNonDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int x : nums){
            if(s.find(x) == s.end())
                s.insert(x);
            else
                s.erase(x);
        }
        return *s.begin();
 }

/*
Binary Search method
Time Complexity: O(log n)
Space Complexity: O(1)
*/
int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        while(low<high){
            int mid = low+(high-low)/2;
            //if mid = odd
            if(mid % 2 == 1){
                mid --;
            }
            //if mid = even
            if(nums[mid] == nums[mid+1]){
                low = mid+2;
            }else{
                high=mid-1;
            }
        }
        return nums[low];        
}













