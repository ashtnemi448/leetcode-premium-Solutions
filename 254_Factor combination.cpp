class Solution {
public:
   
    vector<vector<int>> ans;   
    
    void solve(int n,int pro,vector<int> sub,int id)
    {
        
        if(pro == n){
            ans.push_back(sub);
            return;
        }
        
        if(pro>n)return;
        
        for(int i=id;i<n;i++)
        {
            if (n % i == 0){
            sub.push_back(i);
            solve(n,pro*i,sub,i);
            sub.pop_back();}
        }
    }
    
    vector<vector<int>> getFactors(int n) 
    {
        vector<int> sub;
        solve(n,1,sub,2);
        return ans;
    }
};