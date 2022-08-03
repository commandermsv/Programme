class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            // cout<<"value of n: "<<n<<endl;
            if(n&1==1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};