class Solution {
private:
    priority_queue<int> pq;
public:
    
    int lastStoneWeight(vector<int>& stones) {
        int result;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }

        while(!pq.empty()){
            int first=pq.top();
            pq.pop();
            if(pq.empty()) return first;
            int second=pq.top();
            if(first==second){
                pq.pop();
            }
            else{
                pq.pop();
                pq.push(first-second);
            }
            if(pq.empty()) return 0;
            result=pq.top();
        }
        return result;
    }
};