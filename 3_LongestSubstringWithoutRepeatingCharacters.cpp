class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        if(s.size()==1)return 1;
        set<char> st;
        int i=0;
        int j=0;
        int ans=0;
        
        while(i<s.size() && j<s.size())
        {
            if(st.find(s[j])==st.end())
            {
                st.insert(s[j]);
                j++;
                ans=max(ans,j-i);
            }
            else
            {  
                st.erase(s[i]);
                i++;
            }
        }
     return ans;   
    }
    
};