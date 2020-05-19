class Solution {
public:
    vector<string> ans;
    void solve(int n,int o,int c,string s)
    {
        if(o>n)return;
        if(s.size()==2*n)ans.push_back(s);
        
        solve(n,o+1,c,s+'(');
        if(o > c)
            solve(n,o,c+1,s+')');
    }
    vector<string> generateParenthesis(int n)
    {
        ans.clear();
        string s="";
        solve(n,0,0,s);
        return ans;
    }
};