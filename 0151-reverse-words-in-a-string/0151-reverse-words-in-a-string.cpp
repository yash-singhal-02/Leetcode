class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string word = "";
        for(int i=0;i<=s.length();i++){
            if(i == s.length() || s[i] == ' '){
                if(word != ""){
                    st.push(word);
                    word = "";
                }
            }
            else{
                word += s[i];
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
            if(!st.empty()){
                ans += " ";
            }
        }
        return ans;
    }
};