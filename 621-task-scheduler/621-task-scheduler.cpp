class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> r(26);
        for (int i = 0; i <tasks.size(); i++) 
            r[tasks[i] - 'A']++;
        
        sort(r.begin(),r.end());
        int f_max=r[25];
        int idle=(f_max-1)*n;
        for(int i=r.size()-2;i>=0 && idle>0;--i){
            idle-=min(f_max-1,r[i]);
        }
        idle=max(0,idle);
        return idle+tasks.size();
    }
};