class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cur = arr[arr.size()-1];
        int count = 0;
        for(int i=arr.size()-1;i>=0;i--){
            if(cur == arr[i]){
                count++;
            }else{
                if(count == cur){
                    return cur;
                }else{
                    cur = arr[i];
                    count = 1;
                }
            }
        }
        if(count == cur){
            return cur;
        }else{
            return -1;
        }
        
    }
};
