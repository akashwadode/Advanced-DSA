class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) {
            return false;
        }
        bool isVowel = false;
        bool isConsonant = false;
        int a = 0;
        for (char c : word) {
            a = c - 0;
            if (a == 35 || a == 36 || a == 64) {
                return false;
            } else {
                if (a > 57) {
                    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' ||
                        c == 'u' || c == 'A' || c == 'E' || c == 'I' ||
                        c == 'O' || c == 'U') {
                        isVowel = true;
                    } else {
                        isConsonant = true;
                    }
                }
            }
        }

        return (isVowel && isConsonant);
    }
};
