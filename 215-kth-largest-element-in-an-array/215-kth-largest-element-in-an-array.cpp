class Solution {
private:
    priority_queue<int> pq;
    map<int,int> m;
    
public:
    int j=0,result;
    int findKthLargest(vector<int>& nums, int k) {
        // int first=nums[0];
        // pq.push(nums[0]);
        for(int i=0;i<nums.size();i++){
                pq.push(nums[i]);
            
        }
        while(j<k){
            result=pq.top();
            // cout<<result<<endl;
            pq.pop();
            j++;
        }
        return result;
        
        
        // by hashmap
//         int j=0;
//          int s=nums.size();
    
//         for(int i=0;i<s;i++){
//             if(m.find(nums[i])==m.end()) {
//                 m[nums[i]]++;
//                 cout<<nums[i]<<endl;
//             }
//         }    
//         for(auto i=m.rbegin();i!=m.rend();i++){
//             if(j<k)
//              result=i->first;
//             else break;
//             j++;
//         }
//     return result;
    }
};