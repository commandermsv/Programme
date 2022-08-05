class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,mid;
        int k=end;
        vector<int> result(2,0);
                result[0]=-1;
                result[1]=-1;
        mid=start+(end-start)/2;
        if(nums.size()==1){
            if(target!=nums[0])
            {
                return result;
            }
            else{
                result[0]=0;
                result[1]=0;
                return result;
            }
        }
        while(start<=end){
            if(target==nums[mid]){
                int r2=mid;
                while(r2+1<=k && nums[r2+1]==target){
                    r2++;
                }
                while(mid-1>=0 && nums[mid-1]==target){
                    mid--;
                }
                
                result[0]=mid;
                result[1]=r2;
                return result;
            }
           else if(nums[mid]>target){
                end=mid-1;
                
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else {
                return result;
                
            }
            if(end>k || start<0){
                    return result;
            }
              mid=start+(end-start)/2;

        }
                return result;
        
    }
};