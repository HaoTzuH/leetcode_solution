class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid = 0,index = -1;
        int height = nums.size()-1, low=0;
       
        while(low <= height)
        {
            mid=(height+low)/2;
            if(nums[mid] == target)
            {
                index = mid;
                return index;
            }
            else if(nums[mid] < target)
            {
                low = mid +1;
            }
            else
            {
                height = mid -1;
            }
        }
        if(index == -1)
        {
            index = low;
        }
        return index;
    }
};
