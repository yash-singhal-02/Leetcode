class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
        int st = 0;
        int end = s.length() - 1;
        while(st<=end){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(s[st] != s[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
        
    }
};