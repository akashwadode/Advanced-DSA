class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> maxNum;
        int len = nums.size();
        // use this loop for first window and add values to deque and vector
        for (int i = 0; i < k; i++) {
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        maxNum.push_back(nums[dq[0]]);
        int j = k;
        // this moving window by 1 index and update deque
        while (j < len) {
            if (dq[0] <= j - k) {
                dq.pop_front();
            }
            while (!dq.empty() && nums[dq.back()] < nums[j]) {
                dq.pop_back();
            }
            dq.push_back(j);
            maxNum.push_back(nums[dq[0]]);
            j++;
        }
        return maxNum;
    }
};
