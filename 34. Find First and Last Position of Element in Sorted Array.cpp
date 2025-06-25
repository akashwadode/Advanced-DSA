class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v = {-1,-1};
        if(nums.empty()){
            return v;
        }
        for(int i = 0 ;i<nums.size();i++){
            if(nums[i] == target){
                v[0] =  i;
                v[1] = i;
                i++;
                while(i < nums.size() && nums[i] == target){
                    v[1] = i;
                    i++;
                }
                break;
            }
        }
        return v;
    }
};
