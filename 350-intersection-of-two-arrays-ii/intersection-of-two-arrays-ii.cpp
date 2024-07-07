class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ans;
        unordered_map<int, int> nums11;
        unordered_map<int, int> nums22;

        for(int i = 0; i < nums1.size(); i++)
        {
            nums11[nums1[i]]++;
        }

        for(int i = 0; i < nums2.size(); i++)
        {
            nums22[nums2[i]]++;
        }

        vector<int> result;

        for(auto it : nums11)
        {
            if(nums22.find(it.first) != nums22.end())
            {
               int fre =  min(nums22[it.first], it.second);
               while(fre)
               {
                result.push_back(it.first);
                fre--;
               }
            }
        }
        
        return result;
    }
};

// 1 - 2
// 2 - 2

// 2 - 2