class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0,calc,s=height.size();
        int j=s-1,i=0;
        while(i<s &&j>=0){
            calc=min(height[i],height[j])*abs(j-i);
            if(max<calc){
                max=calc;
            }
            if (height[i] <= height[j]) {
                i++;
            } else {
                j--;
            }
        }
    return max;    
    }
        
        
    };