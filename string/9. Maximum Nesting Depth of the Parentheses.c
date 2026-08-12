/*
LC 1614. Maximum Nesting Depth of the Parentheses
Time: O(n)
Space:  O(1)
*/

class Solution {
public:
    int maxDepth(string s) {
       int depth = 0;
       int maxi = 0;
       for(auto i:s){
        if(i == '('){
            depth++;
        }else if(i == ')'){
            maxi = max(maxi, depth);
            depth--;
        }
       }
       return maxi;
    }
};
