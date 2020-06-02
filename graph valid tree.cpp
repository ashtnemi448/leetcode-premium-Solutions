class Solution {
public:
    vector<int> rank;
    vector<int> parent;
    
    
    int find(int a)
    {
        while(parent[a]!=a)
        {
            a=parent[a];
        }
        return a;
    }
    
    int un(int a,int b)
    {
        int pa=find(a);
        int pb=find(b);
        
        cout<<pa<<" "<<pb<<endl;
        
        if(pa==pb)return -1;
        
        if(rank[pa]>rank[pb])
        {
            parent[pb]=pa;
        }
        
        if(rank[pa]<rank[pb])
        {
            parent[pa]=pb;
        }
        
        if(rank[pa]==rank[pb])
        {
            parent[pb]=pa;
            rank[pa]++;
        }
        return 1;
    }
    
    
    bool validTree(int n, vector<vector<int>>& g)
    {
        if(g.size()==0){if(n>1)return false;else return true;}
        rank.clear();
        parent.clear();
        
        rank.resize(n,0);
        parent.resize(n);
        set<int> se;
        
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
        }
        
        for(int i=0;i<g.size();i++)
        {
            se.insert(g[i][0]);
            se.insert(g[i][1]);
            if(un(g[i][0],g[i][1])==-1)return false;
        }
        if(se.size()<n)return false;
        return true;
    }
};