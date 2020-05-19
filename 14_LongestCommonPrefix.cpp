class Solution {
public:
     string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string res = strs[0];
        for(int i=0; i<strs.size();i++)
            for(int j=0; j<res.size();j++)
                if(strs[i][j]!=res[j]) {res.resize(j); break;}
        return res;
    }
};