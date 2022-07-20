class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> m;
        int k,z,s=numbers.size();
        vector<int> result(2);
        for(int i=0;i<s;i++){
            m[numbers[i]]++;
        }
        for(int i=0;i<s;i++){
            if(m.find(target-numbers[i])!=m.end()){
                result[1]=i+1;
                k=target-numbers[i];
                z=i;
            }
        }
            for(int i=0;i<s;i++){
                if(z!=i && k==numbers[i]){
                    result[0]=i+1;
                }
            }
        
        return result;
    }
};