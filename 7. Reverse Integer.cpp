class Solution {
public:
    int reverse(int x) {
        if(x==0){
            return 0;
        }
        bool isNegative = false;

        while(x%10==0){
            x = x/10;
        }  
        int ans=0;
        int unitCount = 1;
        while(x!=0){
            if((ans > INT_MAX/10)|| (ans < INT_MIN/10)){
                return 0;
            }
            int digit = x%10;
            ans = ans*10 + digit;
            x = x/10;
        }
        return ans;
    }
};
