class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size(); 
        int water = 0;        
        vector<int> stack;   
    
        for (int right = 0; right < n; right++)
        {
            while (!stack.empty() && height[stack.back()] < height[right])
            {
                int mid = stack.back(); 
                stack.pop_back();       
                // If the stack becomes empty, no more water can be trapped
                if (stack.empty())
                    break;
                int left = stack.back();                                                      // Get the index of the next height from the top of the stack
                int minHeight = min(height[right] - height[mid], height[left] - height[mid]); // Calculate the minimum height of the two borders
                int width = right - left - 1;                                                 // Calculate the width between the left and right borders
                water += minHeight * width;                                                   // Calculate the trapped water volume and add it to the total
            }
            stack.push_back(right); // Push the current index onto the stack
        }
        return water; // Return the total trapped water volume
    }
};