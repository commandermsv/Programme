class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); i++) {
        if (!isdigit(s[i]) && s[i] < 'A' || s[i] > 'Z' &&
            s[i] < 'a' || s[i] > 'z')
        {  
            s.erase(i, 1);
            i--;
        }
    }
        for(int j=0;j<s.length();j++)
		s[j]=tolower(s[j]);
        
        int j=s.length()-1;
        for(int i=0;i<s.length();i++){
            if(s[i]!=s[j]){
                return false;
            }
            j--;
        }
        return true;
    }
};