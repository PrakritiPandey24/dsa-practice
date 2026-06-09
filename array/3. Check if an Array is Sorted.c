/*
check if the array is sorted
*/

#include <bits/stdc++.h>
using namespace std;

bool checkSorted(const vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int>nums={1, 2, 3, 5, 3, 4};
    bool ans = checkSorted(nums);
    cout<<ans;
    return 0;
}
