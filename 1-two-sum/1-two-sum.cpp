class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> m;
        vector<int> s;
        
        for (int i = 0; i < nums.size(); i++) {
            int c = target - nums[i];
            if (m.find(c) != m.end()) {
                s.push_back(m[c]);
                s.push_back(i);
                break;
                
            } else {
                m.insert({nums[i], i});
            }
        }
        
        return s;
    }

};