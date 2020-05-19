class Solution {
public:
    int removeElement(vector<int>& a, int val) 
    {
        int st=0;
        int i=0;
        
        while(i<a.size())
        {
            if(a[i]==val)i++;
            else
            {
                a[st]=a[i];
                st++;
                i++;
            }
                
        }
        return st;
    }
};

// int removeElement(int A[], int n, int elem) {
//     int begin=0;
//     for(int i=0;i<n;i++) if(A[i]!=elem) A[begin++]=A[i];
//     return begin;
// }