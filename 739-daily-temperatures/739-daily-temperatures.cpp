class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int s=temperatures.size();
        vector<int> result(s,0);
        int max,x=-10;
        
        for(int i=s-1;i>=0;i--){
            if(i==s-1) result[i]=0;
            
            if(i<s-1 && temperatures[i]<temperatures[i+1] ){
                result[i]=1;
            }
            else if(temperatures[i]>=x) x=temperatures[i];
            else {
                max=i+1;
                    while(temperatures[i]>=temperatures[max]){
                        max=max+result[max];
                        
                    }
                result[i]=max-i;
                    
                }
            }
        return result;
    }
};