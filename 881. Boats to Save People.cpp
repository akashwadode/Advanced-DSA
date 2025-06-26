class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int left = 0, right = people.size() - 1;
        int boatCount = 0;
        while (left < right) {
            if (people[left] + people[right] <= limit) {
                left++;
            }
            boatCount++;
            right--;
        }
        if (left == right) {
            boatCount++;
        }
        return boatCount;
    }
};
