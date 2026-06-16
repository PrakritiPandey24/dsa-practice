/*
LC 875. Koko Eating Banana
Time: O(n * log(maxPile))
Space: O(1)
*/

    long long hoursNeeded(vector<int>& piles, int speed) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + speed - 1) / speed; // ceil(pile/speed)
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (hoursNeeded(piles, mid) <= h) {
                ans = mid;          // valid speed
                high = mid - 1;     // try smaller speed
            } else {
                low = mid + 1;      // speed too slow
            }
        }
        return ans;
    }
