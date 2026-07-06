/*
LC 14. Longest Common Prefix
*/

/*
Method : Vertical Scanning
Time : O(n × m)
Auxiliary Space: O(1)
Total Space : O(m)
*/

string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0; i < strs[0].size(); i++){
            for(int j = 1; j < strs.size(); j++){ 
                if (i >= strs[j].size() || strs[j][i] != strs[0][i])
                    return ans;
            }
            ans+=strs[0][i]; 
        }
        return ans;
    }

/*
Method : Sorting
Time : O(n log b + m) --> nlogn for sorting and m for the for loop
Auxiliary Space: o(1)
Total Space: o(1)
*/
class Solution {

public:

    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        //sort strs
        sort(strs.begin(), strs.end());
        //go thru all the letters in the first word
        for(int i = 0; i < strs[0].size(); i++){
            //if the current letter index is > last word's length, then return ans
            if(i >= strs[n-1].size()){
                return ans;
            }
            //if the current leter of the first word == current letter of the last word -> add to ans -> otherwise return ans 
            if(strs[0][i] == strs[n-1][i]){
                ans+=strs[0][i];
            }else{
                return ans;
            }
        }
        //return ans at the end
        return ans;
    }
};
