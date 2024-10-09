class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        int start = 0;
        int end = n-1;
        int left_max = height[start];
        int right_max = height[end];
        int ans = 0;

        while(start < end)
        {
            if(left_max <= right_max)
            {
                ans = ans + (left_max - height[start]);
                start++;
                left_max = max(left_max, height[start]);
            }
            else
            {
                ans = ans + (right_max - height[end]);
                end--;
                right_max = max(right_max, height[end]);
            }
        }
        return ans;
        
    }
};