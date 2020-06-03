class Solution {
public:

    vector<string> generatePalindromes(string &s)
    {
        int m[256]={0};
        vector<string> ans;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        int odd=0;
        
        for(int i=0;i<256;i++)
        {
            if(m[i]%2==1)odd++;
        }
        if(s.size()==0 || odd > 1)return ans;
        
        string tmp="";
        
        /*
        
        we see that if a char occur odd amt of tym
        if so we take one of it and place it at center
        thus all the remaining char are in even freq;
        */
         for(int i=0;i<256 && odd>0 ;i++)
        {
            if(m[i]%2==1)
            {
                tmp+=(char)i;
                m[i]--;
                break;
            }
        }
        solve(s,ans,tmp,m);
        return ans;
    }
    
    
    void solve(string s,vector<string> &ans,string tmp,int m[256])
    {
        if(tmp.size()==s.length())
        {
            ans.push_back(tmp);
            return;
        }
        
        for(int i=0;i<256;i++)
        {
            if(m[i]>0)
            {
                m[i]-=2;
                solve(s,ans,(char)i+tmp+(char)i,m);
                m[i]+=2;
            }
        }
    }   
};







