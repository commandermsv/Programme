class Solution {
public:
    bool isValid(string s) {
        if((s.size())%2!=0) return false;
        
        stack<char> st;
        for(int i=0; i<s.size();i++){
            
                if(s[i]=='('||s[i]=='['||s[i]=='{' )
                    st.push(s[i]);
            else if((s[i]=='}'||s[i]==')'||s[i]==']' ) && st.empty()==true){
                return false;
            }
            else if(s[i]=='}' && st.empty()!=true && st.top()=='{'){
                st.pop();
            }
             else if(s[i]==')' && st.empty()!=true && st.top()=='('){
                st.pop();
            }
             else if(s[i]==']' && st.empty()!=true && st.top()=='['){
                st.pop();
            }
            else return false;
            
        }
        return st.empty();
    }
};