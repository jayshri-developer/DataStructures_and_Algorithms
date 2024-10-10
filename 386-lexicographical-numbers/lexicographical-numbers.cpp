class Solution {
public:
vector<int> ans;
void help(int i, int n)
{
    if(i > n)
    {
        return;
    }
    int curr = i;
    ans.push_back(curr);

    for(int i = 0; i <= 9; i++)
    {
        string temp = to_string(curr) + to_string(i);
        help(stoi(temp), n);
    }
}
    vector<int> lexicalOrder(int n) {
        
        for(int i = 1; i <= 9; i++)
        {
            help(i, n);
        }
        return ans;
    }
};