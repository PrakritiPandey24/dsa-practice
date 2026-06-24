/*
Aggressive Cows
*/


/*
Brute Force Method
Time: O(n log n + maxDist * n) 
Space: O(1)
*/
bool canPlace(vector<int>& stalls, int cows, int dist){
    int countCows = 1;
    int last = stalls[0];

    for(int i = 1; i < stalls.size(); i++){
        if(stalls[i] - last >= dist){
            countCows++;
            last = stalls[i];
        }
    }
    return countCows >= cows;
}

int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end());
    int maxDist = stalls.back() - stalls.front();
    for(int dist = 1; dist <= maxDist; dist++){
        bool ans = canPlace(stalls, cows, dist); 
        if(ans == false){
            return dist - 1;
        }
    }
    return maxDist;
}

/*
Optimal Method
Time: O(n log n + n log(maxDist))
Space: O(1)
*/
bool canPlace(vector<int>& stalls, int cows, int dist){
    int countCows = 1;
    int last = stalls[0];
    for(int i = 1; i < stalls.size(); i++){
        if(stalls[i] - last >= dist){
            countCows++;
            last = stalls[i];
        }
    }
    return countCows >= cows;
}

int aggressiveCows(vector<int>& stalls, int cows) {
    //make sure the array is sorted before starting
    sort(stalls.begin(), stalls.end());
    //start binary search
    int low = 1;
    int high = stalls.back() - stalls.front();
    while(low <= high){
        int mid = low + (high - low) / 2;
        bool ans = canPlace(stalls, cows, mid);
        if(ans){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return high;
}
