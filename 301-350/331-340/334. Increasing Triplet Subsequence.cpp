class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        if(nums.size() <= 2)
            return false;
        
        int a = INT_MAX, b = INT_MAX, c = INT_MAX;
        
        for(int i= 0 ; i < nums.size() ; i++)
        {
            if(nums[i] <= a)
            {
                a = nums[i];
            }
            
            else if(nums[i] <= b)
            {
                b = nums[i];
            }
            
            else
                return 1;
        }

      
        return false;
    }
};