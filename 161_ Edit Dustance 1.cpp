bool isEditDistanceOne(string s1, string s2) 
{ 
    int m = s1.length(), n = s2.length(); 
    if (abs(m - n) > 1) 
        return false; 
  
    int count = 0; // Count of edits 
  
    int i = 0, j = 0; 
    while (i < m && j < n) 
    { 
        if (s1[i] != s2[j]) 
        { 
            if (count == 1) 
                return false; 
  
            // If length of one string is 
            // more, then only possible edit 
            // is to remove a character 
            if (m > n) 
                i++; 
            else if (m< n) 
                j++; 
            else
            { 
                i++; 
                j++; 
            }  
            count++; 
        } 
  
        else 
        { 
            i++; 
            j++; 
        } 
    } 
  
    // If last character is extra in any string 
    if (i < m || j < n) 
        count++; 
  
    return count == 1; 
}