/*
LC 13. Roman to Integer
Time: O(n)
Space: O(1)
*/

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> list = {
            {'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000},
        };

        int num = 0;
        int i = 0;
        while(i < s.length()-1){
            if(list[s[i+1]] > list[s[i]]){
                
                num+= (list[s[i+1]] - list[s[i]]);
                i+=2;
            }else{
                num+= list[s[i]];
                i++;
            }
        }
        if( i == s.length()-1){
            num+= list[s[i]];
        } 
        return num;
    }
};
