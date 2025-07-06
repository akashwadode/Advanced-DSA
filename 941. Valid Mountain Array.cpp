class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3 || arr[0] > arr[1] ||
            arr[arr.size() - 1] > arr[arr.size() - 2]) {
            return false;
        }
        int i = 0;
        for (; i < arr.size() - 1; i++) {

            if (arr[i] >= arr[i + 1]) {
                break;
            }
        }
        for (; i < arr.size() - 1; i++) {
            if (arr[i] <= arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
};
