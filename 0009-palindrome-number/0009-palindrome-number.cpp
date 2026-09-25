class Solution {
public:
    bool isPalindrome(int x) {
        long i,len,n1=x;
        long rev=0,a=0;
        while(x<0)
        return false;
        while(x>0)
        {
          a=x%10;
          rev=rev*10+a;
          x/=10;
        }
        if(rev==n1)
        return true;
        else
        return false;
    }
};