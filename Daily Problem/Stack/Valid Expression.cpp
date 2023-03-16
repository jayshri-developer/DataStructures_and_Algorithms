// PL:- https://practice.geeksforgeeks.org/problems/valid-expression1025/1
// TC: O(N)
// SC:- O(N)

bool valid(string s)
{
    // code here
    int i = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s.at(i) == '(')
        {
            count1++;
        }
        if(s.at(i) == '[')
        {
            count2++;
        }
        if(s.at(i) == '{')
        {
            count3++;
        }
        if(s.at(i) == ')')
        {
            count1--;
        }
        if(s.at(i) == ']')
        {
            count2--;
        }
        if(s.at(i) == '}')
        {
            count3--;
        }
        
        if(count1 < 0 || count2 < 0 || count3 < 0)
        {
            return false;
        }
    }
    
    if(count1 == 0 && count2 == 0 && count3 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
