// Approach 1 (recursion)
//article link: https://leetcode.com/problems/reaching-points/
// TC: 

class Solution {
public:
bool recurse(int sx, int sy, int tx, int ty) {
if (tx < sx) {
return false;
}
else if (tx == sx) {
return ((ty - sy) % sx) == 0;
}
else {
return recurse(sy, sx, ty % tx, tx);
}
}

bool reachingPoints(int sx, int sy, int tx, int ty) {
if(tx<sx || ty<sy) return false;
if (tx < ty) {
return recurse(sx, sy, tx, ty);
}
else {
return recurse(sy, sx, ty, tx);
}
}
};


// Approach 2 
//article link: https://leetcode.com/problems/reaching-points/
// TC: O(1)


class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
         while(tx >= sx && ty >= sy)
         {
             if(tx > ty && tx - sx >= ty)
             {
                tx = (tx-sx) % ty + sx; 
             }

             else if (tx < ty && tx <= ty - sy)
             {
                ty = (ty-sy) % tx + sy; 
             }

             else if(sx == tx && sy == ty)
             {
                 return true;
             }
             
             else 
             {
                 return false;
             }
         }

         return false;
    }
};
