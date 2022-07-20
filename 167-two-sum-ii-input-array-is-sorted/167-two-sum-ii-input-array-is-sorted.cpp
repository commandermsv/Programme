class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int> result(2);
        int s=numbers.size();
        int j=s-1;
        int i=0;
        while(i!=s){
            if(numbers[i]+numbers[j]==target){
                result[0]=i+1;
                result[1]=j+1;
                return result;
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
                
            }
     else if(numbers[i]+numbers[j]<target){
                 i++;
             }
        }
        
        
        
        
        
        
        return result;
    }
};