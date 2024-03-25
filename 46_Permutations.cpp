//將後面的數字任益交換，處理位置i+1,直到處理到最後一位
//使用回朔，遞迴完成後再修改回來
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        backtracking(nums, 0, ans);
        return ans;
    }
    void backtracking(vector<int> &nums, int level, vector<vector<int>> &ans)
    {
        if(level== nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int i=level; i< nums.size();i++)
        {
            swap(nums[i], nums[level]);
            backtracking(nums, level+1, ans);//遞迴子節點
            swap(nums[i], nums[level]);
        }
    }
};
