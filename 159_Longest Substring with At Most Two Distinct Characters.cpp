
map<char,int> m;

int solve(string s,int k)
{
    int cnt=0;
    int i=0;
    int j=1;
    int mx=INT_MIN;
    m.insert(make_pair(s[0],1));

    while(j<s.size())
    {
        if(m.size()>k)
        {
            if(m[s[i]==1])m.erase(s[i]);
            else m[s[i]]--;
            i++;
        }
        else
        {
            if(m.find(s[j]!=s.end()))
            {
                 m.insert(make_pair(s[j],1));
            }
            else
            {
                m[s[j]]++;
            }
            mx=max(mx,m.size());
            j++;
        }
    }
    return mx;
}