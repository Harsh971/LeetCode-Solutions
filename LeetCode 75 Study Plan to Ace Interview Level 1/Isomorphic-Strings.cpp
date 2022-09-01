class Solution {
public:
    bool isIsomorphic(string s, string t) {        
        return (isIso(s,t) && isIso(t,s));        
    }
    bool isIso(string &s, string &t) {
        
        unordered_map<char, char> m;        
        for(int i=0; i<s.length(); i++)
        {
            if(m.count(s[i])) 
            {
                if(m[s[i]] != t[i]) 
                {
                    return false;
                }
            } 
            else 
            {
                m[s[i]]=t[i];
            }
        }
        return true;
       
    }
};