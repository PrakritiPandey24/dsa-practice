/*
LC 151. Reverse Words in a String
*/
/*
Brute Force Approach
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    string reverseWords(string s) {
        int right = s.size()-1;
        string ans;
        //ignore all the spaces at the end of thw word
        while(right>=0){
            while(right >= 0 && s[right]==' '){
                right--;
            }
            // No more words left
            if (right < 0)
                break;

            //initialize left
            int left = right;
            //find the beginning of thw each word
            while(left >= 0 && s[left] != ' ' ){
                left--;
            }

            //add a space before each word. this can also be done after each word is appended into the final answer string, but that requires an extra step of removing one space from the final answer string before returning 
            if(!ans.empty()){
                ans+=' ';
            }
            //copy the word to the ans
            for(int i = left+1; i<=right; i++){
                ans+=s[i];
            }
            
            //re-initialize right
            right = left--;
        }
        return ans;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Optimal Approach
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int right = s.size() - 1;

        while (right >= 0) {
            while (right >= 0 && s[right] == ' ')
                right--;

            if (right < 0)
                break;

            int left = right;

            while (left >= 0 && s[left] != ' ')
                left--;

            if (!ans.empty())
                ans += ' ';

            ans += s.substr(left + 1, right - left);

            right = left - 1;
        }

        return ans;
    }
};
