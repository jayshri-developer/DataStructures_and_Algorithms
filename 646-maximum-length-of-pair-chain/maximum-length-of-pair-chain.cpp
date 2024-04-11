class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1]; // Sorting based on the ending point.
        });

        vector<vector<int>> list;

        for(const vector<int>& pair : pairs) {
            if(list.empty()) {
                list.push_back(pair);
            } else {
                vector<int> last_pair = list.back();
                if(pair[0] > last_pair[1]) {
                    list.push_back(pair);
                }
            }
        }

        return list.size();
    }
};