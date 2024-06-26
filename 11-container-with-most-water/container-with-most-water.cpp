class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int ans = 0;
        int result = 0;

        while(i < j)
        {
            ans = min(height[i], height[j]) * (j-i);
            // cout<<ans<<"->";
            result = max(result, ans);
            if(height[i] >= height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return result;
    }
};