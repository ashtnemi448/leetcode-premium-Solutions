class Solution {
public:
    vector<int> twoSum(vector<int>& a, int tar) 
    {
        
        map<int,int> m;

        for(int i=0;i<a.size();i++)
        {
            int x =tar-a[i];
            if( m.find(x)!=m.end() )
                return vector<int>{m[x],i};
            m.insert(make_pair(a[i],i));    
        }
        
        return vector<int>{};
    }
};