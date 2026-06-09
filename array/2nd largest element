/*
Find the second largest element 
*/

#include <bits/stdc++.h>
using namespace std;

int find2ndMaximum(const vector<int>& nums) {
    int maxi = INT_MIN;
    int maxi2 = INT_MIN;
    for (int x : nums) {
        if (x > maxi) {
            maxi2 = maxi;
            maxi = x;
        }
        else if (x > maxi2 && x != maxi) {
            maxi2 = x;
        }
    }
    return maxi2;
}

int main() {
    vector<int>nums={1, 2, 3, 5, 3, 4};
    int ans = find2ndMaximum(nums);
    cout<<ans;
    return 0;
}
