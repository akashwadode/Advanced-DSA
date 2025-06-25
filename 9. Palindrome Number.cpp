class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp = 0;
        int len = to_string(x).length();
        for (int i = 0; i < (len / 2); i++) {
            temp = (temp * 10) + (x % 10);
            x = x / 10;
        }
        if (len%2!=0) {
            x = x / 10;
        }
        return temp == x ? true : false;
    }
};
