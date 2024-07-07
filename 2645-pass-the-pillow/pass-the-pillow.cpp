class Solution {
public:
    int passThePillow(int n, int time) {
        
        int index = 1;
        bool flag = false;
        while(time > 0)
        {
            if(index == n || index == 1)
            {
                flag = !flag;
            }
            if(flag == true)
            {
                index++;
            }
            else
            {
                index--;
            }
            time--;
        }
        return index;
    }
};