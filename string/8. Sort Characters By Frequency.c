/*
LC 451. Sort Characters By Frequency
Time: O(nlogn)
Space: O(n)
*/

class Solution {
public:
    string frequencySort(string s) {
        map<char, int> freq[256];
        //map the frequency
        for(auto i: s){
            freq[i]++;
        }
        //sort by the frequency of each character
       vector<pair<char, int>> order;
        for(auto i : freq){
            order.push_back(i);
        }

        sort(order.begin(), order.end(), [] (auto a, auto b){
            return a.second>b.second;
        });
        //append the ans according to the frequency
        string ans;
        for(auto i : order){
            for(int j = 1; j<=i.second; j++){
                ans+=i.first;
            }
        }
        return ans;
    }
};
