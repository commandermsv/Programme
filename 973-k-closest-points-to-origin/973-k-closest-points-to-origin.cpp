class Solution {
    private:
            priority_queue<pair<double, vector<int>>> pq;

public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        for (int i = 0; i < points.size(); i++) {
            double distance = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            pq.push({distance, points[i]});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        
        vector<vector<int>> result;
        while(!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        
        return result;
    }
};