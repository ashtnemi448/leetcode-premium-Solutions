class Solution {
public:
    /*
     * @param nums: A list of integers
     * @return: nothing
     */
    void wiggleSort(vector<int> &nums) 
    {
        if(nums.size()==0)return;
        if(1)
        {
            for(int i=1;i<nums.size()-1;i+=2 )
            {
                if( max(nums[i-1] , max(nums[i+1],nums[i]) )==nums[i])continue;
                
                if(nums[i+1]>nums[i-1])swap(nums[i],nums[i+1]);    
                else swap(nums[i],nums[i-1]);
            }
        }
        
        if(nums.size()%2==0)
        {
            if(nums.size()>1 && nums[nums.size()-1]<nums[nums.size()-2])
            {
                swap(nums[nums.size()-1],nums[nums.size()-2]);
                if(nums.size()>2 && nums[nums.size()-2]>nums[nums.size()-3])
                swap(nums[nums.size()-2],nums[nums.size()-3]);
            }
        }
        
    }
};