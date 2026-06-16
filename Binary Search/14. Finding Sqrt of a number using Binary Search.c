/*
Finding Sqrt of a number using Binary Search
Time: O(log n)
Space: O(1)
*/

int search(int target){
    int low = 0, high = target, ans = 0;
    while(low <= high){
        int mid = low + (high-low)/2;

        if(mid * mid <= target){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}
