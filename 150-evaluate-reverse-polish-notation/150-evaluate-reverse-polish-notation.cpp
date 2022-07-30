#include <string.h>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int t1,t2;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                t1=st.top();
                st.pop();
                t2=st.top();
                st.pop();
                    t1=t1+t2;
                st.push(t1);
                cout<<"ye hua: "<<tokens[i]<<":iska result: "<<t1<<endl;
            }
            else if(tokens[i]=="-"){
                t1=st.top();
                st.pop();
                t2=st.top();
                st.pop();
                    t1=t2-t1;
                st.push(t1);
                
                cout<<"ye hua: "<<tokens[i]<<":iska result: "<<t1<<endl;
            }
            else if(tokens[i]=="*"){
                t1=st.top();
                st.pop();
                t2=st.top();
                st.pop();
                    t1=t1*t2;
                st.push(t1);
                
                cout<<"ye hua: "<<tokens[i]<<":iska result: "<<t1<<endl;
            }
           else if(tokens[i]=="/"){
                t1=st.top();
               st.pop();
                t2=st.top();
               st.pop();
                    t1=int(t2/t1);
                st.push(t1);
               
                cout<<"ye hua: "<<tokens[i]<<":iska result: "<<t1<<endl;
            }
            else {
              int num = atoi(tokens.at(i).c_str());
                
                st.push(num);
                cout<<"inserted: "<<num<<endl;
            }
        }
        return st.top();
    }
};