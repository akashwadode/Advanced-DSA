class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0;
        int high = nums.size() - 1;
        while (mid <= high) {
            int temp = nums[mid];
            if (temp == 0) {
                nums[mid] = nums[low];
                nums[low] = temp;
                low++;
                mid++;
            } else if (temp == 1) {
                mid++;
            } else {
                // if num is 2
                nums[mid] = nums[high];
                nums[high] = temp;
                high--;
            }
        }
    }
};
