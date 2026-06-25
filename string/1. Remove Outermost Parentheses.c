/*
LC 1021. Remove Outermost Parentheses
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int counter=0;
        for(auto i: s){
            if(i=='('){
                counter++;
                if(counter>1){
                    ans+=i;
                }
            }else{
                counter--;
                if(counter>0){
                    ans+=i;
                }
            }
        }
        return ans;
    }
};
