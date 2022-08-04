class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        if(end==0){
            if(nums[0]==target) return 0;
            else return -1;
        }
        int mid=(start+end+1)/2;
        while(start<=end){
            
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            mid=(start+end)*0.5;      
        }
        return -1;
    }
};