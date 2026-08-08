/*
LC 205. Isomorphic Strings
Time: O(N)
Space: O(1)
*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapA;
        unordered_map<char, char> mapB;


        for(int i = 0; i<s.length(); i++){
                if( mapA.find(s[i]) == mapA.end() && mapB.find(t[i]) == mapB.end()){
                    mapA[s[i]] = t[i];
                    mapB[t[i]] = s[i];
                }else{
                    if(mapA[s[i]] != t[i] ||
                        mapB[t[i]] != s[i]){
                        return false;}
                }
        }
        return true;
    }
};
