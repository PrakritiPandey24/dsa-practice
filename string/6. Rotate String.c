/*
LC 796. Rotate Strings
Time: O(n)
Space: O(n)
*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        string temp = s+s;
        if(temp.find(goal) == string::npos){
            return false;
        }
        return true;
    }
};
