class Vector2D {
public:
    int i,j;
    vector<vector<int>> v;
    
    Vector2D(vector<vector<int>>& vec2d) {
        i=0;j=0;
        v=vec2d;
    }

    int next() 
    {
        while ((i < v.size()) && (j >= v[i].size())) 
       {
            i ++;
            j = 0;
        }
        return v[i][j++];
    }

    bool hasNext() 
    {
         while ((i < v.size()) && (j >= v[i].size())) 
       {
            i ++;
            j = 0;
        }
        return i<v.size();
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i(vec2d);
 * while (i.hasNext()) cout << i.next();
 */