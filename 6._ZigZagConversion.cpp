class Solution {
public:
    string convert(string s, int n) 
    {
        if(n==1)return s;
        vector<vector<char>> v(n);
        int f=0;
        int in=0;
        
        for(int i=0;i<s.size();i++)
        {
            
            v[in].push_back(s[i]);
            
            if(f==0)
            {
                in++;
            }
            if(f==1)
            {
                in--;
            }
            if(( in==n || in==-1 ))
            {
                if(f==0){f=1;in-=2;}
                else
                {f=0;in+=2;}
            }
            
        }
        string st="";
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                st+=v[i][j];
                //cout<<v[i][j]<<" ";cout<<endl;
            }
        }
        return st;
    }
};