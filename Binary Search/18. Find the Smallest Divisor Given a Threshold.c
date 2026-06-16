/*
LC 1283. Find the Smallest Divisor Given a Threshold
Time Complexity: O(n * log(max(nums)))
Space Complexity: O(1)
*/

int helper(vector<int>& nums, int num){
        int ans = 0;
        for(auto i: nums){
            ans += (i + num - 1) / num; //make it int
            //ans += static_cast<int>(ceil(double(i)/num)); //because ceil returns double
        }
        return ans;
}

int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while(low<=high){
            int mid = low+(high-low)/2;
            int ans = helper(nums, mid);

            if(ans<=threshold){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }    
        return low;
}
