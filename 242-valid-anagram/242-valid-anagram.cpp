
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sm;
        unordered_map<char,int> sn;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length(); i++){
            sm[s[i]]++;
        }
        for(int i=0;i<t.length(); i++){
            sn[t[i]]++;
        }
        if(sm==sn){
            return true;
        }
        else{
            return false;
        }
        
    }
};