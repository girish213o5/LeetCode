class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        stack<int>st; 
         string result ="";

        for(int i=0;i<n;i++){
            if(s[i] == '('){
                 st.push(result.size());
            }
            else if(s[i] == ')'){
                  int start = st.top();
                  st.pop();
                   reverse(result.begin()+start,result.end());
            }
            else{
                 result +=s[i];
            }

        }
        return result; 
        
    }
};