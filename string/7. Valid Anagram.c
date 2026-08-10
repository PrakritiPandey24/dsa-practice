/*
LC 242. Valid Anagram
Time: O(n log n)
Auxiliary space: O(log n)
Total space including copied input: O(n)
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end()); 
        if(s.length() != t.length()){
            return false;
        }else if( s != t){
            return false;
        }
        return true;
    }
};

/*
ALMOST OPTIMAL SOLUTION : the optimal solution would be to check the frequency of each letter instead of sorting the strings. 
Time: O(n)
space: O(1) 
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int, int> freq_s;
        unordered_map <int, int> freq_t;
        for(auto i: s){
            freq_s[i]++;
        }
        for(auto i: t){
            freq_t[i]++;
        }
        if(freq_s == freq_t){
            return true;
        }
        return false;
    }
};

/*
OPTIMAL SOLUTION : a better way of writing the previous code. 
Time: O(n)
space: O(1) 
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        //check if they hv the same length or not
        if (s.length() != t.length()) {
            return false;
        }
        //an array for freq set to 0 for all characters:
        int freq[26] = {0};
        //if the letter appears in s then add freq, if it appears in t then remove freq:
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        //if any letter has a freq that isnt 0, it was an extra one: 
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
}
