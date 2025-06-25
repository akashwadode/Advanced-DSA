class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int flag = nums.size();
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == val) {
                flag--;
                int temp = nums[flag];
                nums[flag] = nums[i];
                nums[i] = temp;
            }   
        }
        return flag;
    }
};
