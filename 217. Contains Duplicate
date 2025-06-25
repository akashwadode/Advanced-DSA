class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> list ={};
        for(int i : nums){
            list[i]++;
            if(list[i] > 1){
                return true;
            }
        }
        return false;
    }
};
