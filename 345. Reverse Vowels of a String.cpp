class Solution {
public:
    string reverseVowels(string s) {
        int j = s.size() - 1;
        
        for (int i = 0; i < s.size(); i++) {
            if (i > j) {
                break;
            }
            
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                while (j >= 0 && j >= i && s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u' && s[j] != 'A' && s[j] != 'E' && s[j] != 'I' && s[j] != 'O' && s[j] != 'U') {
                    j--;
                }
                
                swap(s[i], s[j]);
                j--;
            }
        }
        
        return s;
    }
};