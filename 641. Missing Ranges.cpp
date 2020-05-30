class Solution {
public:
  
    vector<string> findMissingRanges(vector<int> &a, int lower, int upper) 
    {
        if(a.size()==0)
        {
            if(upper==lower)return vector<string>{to_string(lower)};
            else
            return vector<string>{to_string(lower)+"->"+to_string(upper)};
            
        }
       
        
        vector<string> ans;
        int i=0;

        if(a[i]>lower)
        {
            
            if(a[0]-1==lower)ans.push_back(to_string(lower));
            else
            ans.push_back(to_string(lower)+"->"+to_string(a[i]-1));
        }
        
       
        for(;i<a.size()-1;i++)
        {
            if(a[i]==a[i+1])continue;
            if(a[i+1]==a[i]+1)continue;
            else
            {
                long  s =a[i]+1;
                long  e =a[i+1]-1;
                if( s == e )
                {
                   ans.push_back(to_string(s));
                }
                else
                {
                    ans.push_back(to_string(s)+"->"+to_string(e));
                }
            }
        }
        //while(i+1<a.size() && a[i]==a[i+1]){i++;}
        if(a[a.size()-1]==upper-1) ans.push_back(to_string(upper));
        else
        {
            if(a[a.size()-1] < upper)
                 ans.push_back(to_string((long)a[a.size()-1]+1)+"->"+to_string((long)upper));
        }
        return ans;
    }
};