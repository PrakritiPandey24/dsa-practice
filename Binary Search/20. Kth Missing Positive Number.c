/*
LC 1539. Kth Missing Positive Number
Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0, high = arr.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int var = arr[mid]-(mid+1);
            if(var<k){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return low+k;
    }
};
