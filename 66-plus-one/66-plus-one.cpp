class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int temp=0;
        for(int i=digits.size()-1;i>=0;i--){
            
            if(i==digits.size()-1) temp=digits[i]+1;
            else temp=digits[i]+temp;
            
            
            if(temp==10){
                if(i==0){
                    digits[0]=0;
                     digits.insert(digits.begin(),1);
                    return digits;
                }
                digits[i]=0;
                temp=1;                
            }
            else {digits[i]=temp;temp=0;}
            if(i==0 && temp>0 && digits[0]==9){
                digits[0]=0;
                digits.insert(digits.begin(),1);
                break;
            }
        }
        return digits;
    }
};