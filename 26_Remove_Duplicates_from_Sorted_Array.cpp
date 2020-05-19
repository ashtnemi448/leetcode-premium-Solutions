class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        if(a.size()==0)return 0;
        int st=0;
        int i=1;
        while(i<a.size())
        {
            if(a[i]==a[st])i++;
            else
            {
                a[st+1]=a[i];
                st++;
                i++;
            }
                
        }
        a.resize(st+1);
        for(int i=0;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        
        return st+1;
    }
};