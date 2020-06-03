class Solution {
public:
  
    bool canPermutePalindrome(string &s) 
    {
        if(s.size()==0)return true;
       map<char,int> hm;
       
       int cnt=0;
       for(int i=0;i<s.size();i++)
       {
           if(hm.find(s[i])==hm.end())
           {
               hm.insert(make_pair(s[i],1));
               cnt++;
           }
           else
           {
               if(hm[s[i]]==1)cnt--;
               hm[s[i]]++;
           }
       }
       
       int v=0;
       for(auto i=hm.begin();i!=hm.end();i++)
        {
            cout<<i->second<<endl;
           if(i->second%2==1)v++;
        }
        cout<<v<<endl;
        if(v>=2)
            return false;
        else
            true;
    }
};