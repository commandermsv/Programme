class Solution {
public:
    bool isHappy(int n) {
        int sum=0,count=0;
        while(count<50){
        while(n!=0){
            sum=sum+((n%10)*(n%10));
            // cout<<"sum of: "<<n%10<<"="<<sum<<endl;
            n/=10;
        }
            if(sum==1) return true;
            else{
                n=sum;
                sum=0;
                count++;
                if(count==500) return false;
               
            }
        }
        return false;
    }   
};