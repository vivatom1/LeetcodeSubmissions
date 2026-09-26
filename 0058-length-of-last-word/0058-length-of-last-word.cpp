class Solution {
public:
    int lengthOfLastWord(string s) {
       int i,len=s.size(),len1=0;
       for(i=len-1;i>=0;i--)
       {
         if(s[i] == ' ' && len1 == 0)
                continue;
        if(s[i]==' ')
        break;
        len1++;
       } 
       return len1;
    }
};