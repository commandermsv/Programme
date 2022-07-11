class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        // for(auto i=0;i<nums.size();i++){
        //     for(auto j=0; j<nums.size();j++){
        //         if(i!=j && nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                return true;
            }
             s.insert(nums[i]);
        }
        return false;
    }
};