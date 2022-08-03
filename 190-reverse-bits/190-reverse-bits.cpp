class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<uint32_t> r(32,0);
        uint32_t sum=0,t=4294967296;
        int i=0;
        string s="";
        
        for(int i=0;i<32;i++){
           r[i]=n&1;
            // cout<<r[i];
           s=s+to_string(r[i]);
            n=n>>1;
           
            
       }
       // cout<<endl<<"s is: "<<s;
        // while(i<32){
        //     s=s+r[i];
        //     i++;
        // }
           char* end;
        return strtoul(s.c_str(), &end, 2);
    }
};