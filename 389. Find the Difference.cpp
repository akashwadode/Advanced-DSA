class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<s.length();i++){
            sum1 += s[i];
            sum2 += t[i];
        }
        sum2 += t[t.length()-1];
        return (char)sum2-sum1;
    }
};
