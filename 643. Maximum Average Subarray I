class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i=0;i<k;i++){
            sum +=nums[i];
        }
        double maxAvg = sum/k;
        int i = k;
        while(i<nums.size()){
            sum -= nums[i-k];
            sum += nums[i];
            if(maxAvg < sum/k){
                maxAvg = sum/k;
            }
            i++;
        }
        return maxAvg;
    }
};
