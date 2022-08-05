class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        int count=0,j=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])==s.end()){
            s.insert(nums[i]);
            count++;
            }
           
                }
           // nums.clear();
         for(auto& i:s){
                nums[j]=i;
             // cout<<"value of i"<<i<<endl;
                j++;
            }
        return count;
    }
};