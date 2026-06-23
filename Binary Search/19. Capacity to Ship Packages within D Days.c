/*
LC 1011 - Capacity to Ship Packages within D Days
Time Complexity: O(n * log(sum(weights)))
Space Complexity: O(1)
*/

class Solution {
public:
    int daysReq(vector<int>& weights, int capacity) {
        int days = 1, load = 0;
        for(int i = 0; i < weights.size(); i++) {
            if(load + weights[i] > capacity) {
                days++;
                load = weights[i];
            } else {
                load += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        //declare and initialize variables
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;
        for(auto w : weights) {
            high += w;
        }
        int ans = 0;

        //figure out answer
        while(low <= high) {
            int mid = low + (high - low) / 2;
            int varDays = daysReq(weights, mid);
            if(varDays <= days) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
