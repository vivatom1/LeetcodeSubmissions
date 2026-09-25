class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0,x;
        while(pow(2,i)<=n)
        {
            if(n==pow(2,i))
            return true;
            i++;
        }
        return false;
    } 
   
};