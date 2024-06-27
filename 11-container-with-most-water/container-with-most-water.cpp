class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int ans = 0;
        int result = 0;

        while(i < j)
        {
            ans = min(height[i] , height[j]) * (j-i);
            result = max(result, ans);
            if(height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return result;
    }
};