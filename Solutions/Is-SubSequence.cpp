class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int temp = 0;  
        if(s.length() == 0) 
        {
            return true;
        }
        for(int i=0 ; i<t.length(); i++)
        {
           if(t[i] == s[temp])
           {
               ++temp;
           } 
            if(temp == s.length()) return true;
        }
        return false;
    }
};