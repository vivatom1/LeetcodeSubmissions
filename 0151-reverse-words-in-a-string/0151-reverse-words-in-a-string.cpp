class Solution {
public:
    string reverseWords(string s) {
        int len=s.length();
         string s2,s3;
         reverse(s.begin(),s.end());
         for(int i=0;i<len;i++)
         {
            while(i<len && s[i]!=' ')
            {
                s2+=s[i];
                i++;
            }
            reverse(s2.begin(),s2.end());
            if(s2.length()>0)
            {
                s3+=" "+s2;
            }
            s2="";
         }
       return s3.substr(1); 
    }
};