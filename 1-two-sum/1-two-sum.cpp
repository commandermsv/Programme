class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j && nums[i]+nums[j]==target){
                    vector<int> a;
                    a.push_back(i);
                    a.push_back(j);
                    return a;
                }
            }
        }
        vector<int> m(2);
        m.push_back(0);
        m.push_back(0);
        return m;
    }
};