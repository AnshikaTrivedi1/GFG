class Solution {
public:
    int firstOccurence(string txt, string pat) {
        int n = txt.length();
        int m = pat.length();
        
        if (m == 0) return 0;
        if (m > n) return -1;
        
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && txt[i + j] == pat[j]) {
                j++;
            }
            if (j == m) {
                return i;
            }
        }
        
        return -1;
    }
};