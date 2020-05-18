class Solution {
public:
    vector<int> twoSum(vector<int>& a, int tar) 
    {
        
        int i=0;
        int j=a.size()-1;
        
        map<int,int> m;
        for(int i=0;i<=j;i++)
        {
            m.insert(make_pair(a[i],i));
        }
        
        sort(a.begin(),a.end());
        while(i<j)
        {
            if(tar == a[i]+a[j])
                return vector<int>{m[a[i]],m[a[j]]};
            
            if(tar > a[i]+a[j] )i++;
            else
                j--;
        }
        
        return vector<int>{};
    }
};