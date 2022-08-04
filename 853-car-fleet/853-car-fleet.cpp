class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<float>s;
        float t,count=0;
        vector<pair<int,int>>final;
        for(int i=0;i<position.size();i++){
            final.push_back({position[i],speed[i]});
        }
        sort(final.begin(),final.end());
        
        
        
        for(int i=speed.size()-1;i>=0;i--){
            t=(target-final[i].first)/float(final[i].second);
            // cout<<t<<endl;
            if(s.empty() || s.top()<t){
                s.push(t);
                 // cout<<"for push: "<<t<<endl;
                count++;
            }
        }
        return count;
    }
};